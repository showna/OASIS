// $Id: fork_jit_tool.cpp 2286 2013-09-19 18:40:30Z hillj $

#include "pin++/Callback.h"
#include "pin++/Tool.h"
#include "pin++/Pintool.h"
#include "pin++/Guard.h"

#include <iostream>
#include <cstdlib>

#if defined (TARGET_WINDOWS)
typedef int pid_t;
#endif

/**
 * @class beforeFork
 *
 * Callback that gets parent pids before fork calls.
 */
class beforeFork : public OASIS::Pin::Callback0 <beforeFork>
{
public:
  beforeFork (OASIS::Pin::Lock & lock, pid_t & parent_pid)
  : lock_ (lock),
    parent_pid_ (parent_pid) { }

  void handle_analyze_fork (THREADID thr_id, const OASIS::Pin::Const_Context & ctx)
  {
    do
    {
      OASIS::Pin::Guard (this->lock_, thr_id + 1);
      std::cerr << "TOOL: Before fork." << std::endl;
    } while (false);

    this->parent_pid_ = OASIS::Pin::Tool::current ()->get_pid ();
  }

private:
  OASIS::Pin::Lock & lock_;
  pid_t & parent_pid_;
};

/**
 * @class afterForkInParent
 *
 * Callback that verifies parent PIDs
 */
class afterForkInParent : public OASIS::Pin::Callback0 <afterForkInParent>
{
public:
  afterForkInParent (OASIS::Pin::Lock & lock, pid_t & parent_pid)
  : lock_ (lock),
    parent_pid_ (parent_pid) { }

  void handle_analyze_fork (THREADID thr_id, const OASIS::Pin::Const_Context & ctx)
  {
    do
    {
      OASIS::Pin::Guard (this->lock_, thr_id + 1);
      std::cerr << "TOOL: After fork in parent." << std::endl;
    } while (false);

    if (OASIS::Pin::Tool::current ()->get_pid () != this->parent_pid_)
    {
      std::cerr << "PIN_GetPid () fails in parent process" << std::endl;
      exit (-1);
    }
  }

private:
  OASIS::Pin::Lock & lock_;

  pid_t & parent_pid_;
};

/**
 * @class afterForkInChild
 *
 * Callback that verifies child PIDs
 */
class afterForkInChild : public OASIS::Pin::Callback0 <afterForkInChild>
{
public:
  afterForkInChild (OASIS::Pin::Lock & lock, pid_t & parent_pid)
  : lock_ (lock),
    parent_pid_ (parent_pid) { }

  void handle_analyze_fork (THREADID thr_id, const OASIS::Pin::Const_Context & ctx)
  {
    do
    {
      OASIS::Pin::Guard (this->lock_, thr_id + 1);
      std::cerr << "TOOL: After fork in child." << std::endl;
    } while (false);

    if ((OASIS::Pin::Tool::current ()->get_pid () == this->parent_pid_) || (getppid () != this->parent_pid_))
    {
      std::cerr << "PIN_GetPid () failes in child process" << std::endl;
      exit (-1);
    }
  }

private:
  OASIS::Pin::Lock & lock_;
  pid_t & parent_pid_;
};

/**
 * @class fork_jit_tool
 *
 * Pin tool that registers callbacks around fork ().
 */
class fork_jit_tool : public OASIS::Pin::Tool
{
public:
  fork_jit_tool (void)
  : OASIS::Pin::Tool (),
    before_ (lock_, parent_pid_),
    after_parent_ (lock_, parent_pid_),
    after_child_ (lock_, parent_pid_)
  { }

  void handle_init (int argc, char * argv [])
  {
    this->add_fork_function (FPOINT_BEFORE, &this->before_);
    this->add_fork_function (FPOINT_AFTER_IN_PARENT, &this->after_parent_);
    this->add_fork_function (FPOINT_AFTER_IN_CHILD, &this->after_child_);
  }

private:
  OASIS::Pin::Lock lock_;
  pid_t parent_pid_;

  // The callbacks
  beforeFork before_;
  afterForkInParent after_parent_;
  afterForkInChild after_child_;
};

//
// main
//
int main (int argc, char * argv [])
{
  OASIS::Pin::Pintool <fork_jit_tool> (argc, argv, true).start_program ();
}