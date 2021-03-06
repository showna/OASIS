// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.1.2
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/


// TAO_IDL - Generated from
// .\be\be_codegen.cpp:652

#ifndef _TAO_IDL_TAO_PUBLISHER_SERVICES_92LXAB_CPP_
#define _TAO_IDL_TAO_PUBLISHER_SERVICES_92LXAB_CPP_


#include "Tao_Publisher_ServiceS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

// TAO_IDL - Generated from
// .\be\be_interface.cpp:1867

class TAO_OASIS_DataSubscriber_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OASIS_DataSubscriber_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_OASIS_DataSubscriber_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20,  0, 20,  0, 20, 20,
      5,  5, 20, 20,  0, 20, 20, 20, 20, 20,
     20, 20, 20, 20, 20, 20,  0, 20, 20, 20,
     20, 20, 20, 20, 20, 20, 20, 20,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_OASIS_DataSubscriber_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 7,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 19,
      HASH_VALUE_RANGE = 15,
      DUPLICATES = 0,
      WORDLIST_SIZE = 12
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"handle_data", &POA_OASIS::DataSubscriber::handle_data_skel, 0},
      {"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_get_name", &POA_OASIS::DataSubscriber::_get_name_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_OASIS_DataSubscriber_Perfect_Hash_OpTable tao_OASIS_DataSubscriber_optable;

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:93

POA_OASIS::DataSubscriber::DataSubscriber (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_OASIS_DataSubscriber_optable;
}

POA_OASIS::DataSubscriber::DataSubscriber (const DataSubscriber& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_OASIS::DataSubscriber::~DataSubscriber (void)
{
}

namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class _get_name_DataSubscriber
    : public TAO::Upcall_Command
  {
  public:
    inline _get_name_DataSubscriber (
      POA_OASIS::DataSubscriber * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< char *> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_->name ();
    }
  
  private:
    POA_OASIS::DataSubscriber * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::DataSubscriber::_get_name_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_OASIS::DataSubscriber * const impl =
    dynamic_cast<POA_OASIS::DataSubscriber *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  _get_name_DataSubscriber command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class handle_data_DataSubscriber
    : public TAO::Upcall_Command
  {
  public:
    inline handle_data_DataSubscriber (
      POA_OASIS::DataSubscriber * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::SubscriberDataPacket>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::OASIS::SubscriberDataPacket> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->handle_data (
        arg_1);
    }
  
  private:
    POA_OASIS::DataSubscriber * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::DataSubscriber::handle_data_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OASIS::SubscriberDataPacket>::in_arg_val _tao_packet;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_packet
    };
  
  static size_t const nargs = 2;

  POA_OASIS::DataSubscriber * const impl =
    dynamic_cast<POA_OASIS::DataSubscriber *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  handle_data_DataSubscriber command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:166



::CORBA::Boolean POA_OASIS::DataSubscriber::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:OASIS/DataSubscriber:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_OASIS::DataSubscriber::_interface_repository_id (void) const
{
  return "IDL:OASIS/DataSubscriber:1.0";
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:426

void POA_OASIS::DataSubscriber::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:373

OASIS::DataSubscriber *
POA_OASIS::DataSubscriber::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::OASIS::DataSubscriber STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:1867

class TAO_OASIS_PublisherService_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_OASIS_PublisherService_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_OASIS_PublisherService_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22, 22,  0, 22,  0, 22, 22,
      2,  5, 22, 22, 22, 22, 22, 22, 22, 22,
     22, 22, 22, 22,  0, 22,  0,  0, 22, 22,
     22, 22, 22, 22, 22, 22, 22, 22,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_OASIS_PublisherService_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 8,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 21,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 21,
      HASH_VALUE_RANGE = 17,
      DUPLICATES = 0,
      WORDLIST_SIZE = 13
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &TAO_ServantBase::_is_a_thru_poa_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &TAO_ServantBase::_component_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"_non_existent", &TAO_ServantBase::_non_existent_thru_poa_skel, 0},
      {"_get_name", &POA_OASIS::RemoteService::_get_name_skel, 0},
      {"_interface", &TAO_ServantBase::_interface_skel, 0},
      {"_repository_id", &TAO_ServantBase::_repository_id_thru_poa_skel, 0},
      {"",0,0},{"",0,0},
      {"register_subscriber", &POA_OASIS::PublisherService::register_subscriber_skel, 0},
      {"",0,0},
      {"unregister_subscriber", &POA_OASIS::PublisherService::unregister_subscriber_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_OASIS_PublisherService_Perfect_Hash_OpTable tao_OASIS_PublisherService_optable;

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:93

POA_OASIS::PublisherService::PublisherService (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_OASIS_PublisherService_optable;
}

POA_OASIS::PublisherService::PublisherService (const PublisherService& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs),
    POA_OASIS::RemoteService (rhs)
{
}

POA_OASIS::PublisherService::~PublisherService (void)
{
}

namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class register_subscriber_PublisherService
    : public TAO::Upcall_Command
  {
  public:
    inline register_subscriber_PublisherService (
      POA_OASIS::PublisherService * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::UUID>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::OASIS::UUID> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::OASIS::DataSubscriber>::in_arg_type arg_2 =
        TAO::Portable_Server::get_in_arg< ::OASIS::DataSubscriber> (
          this->operation_details_,
          this->args_,
          2);
        
      this->servant_->register_subscriber (
        arg_1
        , arg_2);
    }
  
  private:
    POA_OASIS::PublisherService * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::PublisherService::register_subscriber_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OASIS::UUID>::in_arg_val _tao_probe_uuid;
  TAO::SArg_Traits< ::OASIS::DataSubscriber>::in_arg_val _tao_subscriber;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_probe_uuid,
      &_tao_subscriber
    };
  
  static size_t const nargs = 3;

  POA_OASIS::PublisherService * const impl =
    dynamic_cast<POA_OASIS::PublisherService *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  register_subscriber_PublisherService command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_OASIS
{
  

  // TAO_IDL - Generated from
  // .\be\be_visitor_operation\upcall_command_ss.cpp:83

  class unregister_subscriber_PublisherService
    : public TAO::Upcall_Command
  {
  public:
    inline unregister_subscriber_PublisherService (
      POA_OASIS::PublisherService * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::OASIS::UUID>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::OASIS::UUID> (
          this->operation_details_,
          this->args_,
          1);
        
      TAO::SArg_Traits< ::OASIS::DataSubscriber>::in_arg_type arg_2 =
        TAO::Portable_Server::get_in_arg< ::OASIS::DataSubscriber> (
          this->operation_details_,
          this->args_,
          2);
        
      this->servant_->unregister_subscriber (
        arg_1
        , arg_2);
    }
  
  private:
    POA_OASIS::PublisherService * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from
// .\be\be_visitor_operation\operation_ss.cpp:171

void POA_OASIS::PublisherService::unregister_subscriber_skel (
  TAO_ServerRequest & server_request,
  TAO::Portable_Server::Servant_Upcall *TAO_INTERCEPTOR (servant_upcall),
  TAO_ServantBase *servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::OASIS::UUID>::in_arg_val _tao_probe_uuid;
  TAO::SArg_Traits< ::OASIS::DataSubscriber>::in_arg_val _tao_subscriber;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_probe_uuid,
      &_tao_subscriber
    };
  
  static size_t const nargs = 3;

  POA_OASIS::PublisherService * const impl =
    dynamic_cast<POA_OASIS::PublisherService *> (servant);

  if (!impl)
    {
      throw ::CORBA::INTERNAL ();
    }

  unregister_subscriber_PublisherService command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:166



::CORBA::Boolean POA_OASIS::PublisherService::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:OASIS/RemoteService:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:OASIS/PublisherService:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_OASIS::PublisherService::_interface_repository_id (void) const
{
  return "IDL:OASIS/PublisherService:1.0";
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:426

void POA_OASIS::PublisherService::_dispatch (
  TAO_ServerRequest & req,
  TAO::Portable_Server::Servant_Upcall* servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// .\be\be_visitor_interface\interface_ss.cpp:373

OASIS::PublisherService *
POA_OASIS::PublisherService::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0);
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::OASIS::PublisherService STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in ());
}

#endif /* ifndef */

