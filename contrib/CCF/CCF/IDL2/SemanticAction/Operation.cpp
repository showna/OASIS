// file      : CCF/IDL2/SemanticAction/Operation.cpp
// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// cvs-id    : $Id: Operation.cpp 80204 2007-12-06 17:58:19Z wotte $

#include "CCF/IDL2/SemanticAction/Operation.hpp"

#include <ostream>

namespace CCF
{
  namespace IDL2
  {
    namespace SemanticAction
    {
    }
  }
}

namespace
{
  const char* labels[] = {"in", "out", "inout"};
}

std::ostream&
operator<< (std::ostream& o,
            CCF::IDL2::SemanticAction::Operation::Direction::Value d)
{
  return o << labels[d];
}
