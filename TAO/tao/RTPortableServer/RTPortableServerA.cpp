// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/RTPortableServer/RTPortableServer.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be/be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_RTPortableServer_POA (
    CORBA::tk_local_interface,
    "IDL:omg.org/RTPortableServer/POA:1.0",
    "POA");

namespace RTPortableServer
{
  ::CORBA::TypeCode_ptr const _tc_POA =
    &_tao_tc_RTPortableServer_POA;
}



// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:50

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Impl_T<RTPortableServer::POA>::to_object (
      CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Impl_T<RTPortableServer::POA>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  CORBA::Boolean
  Any_Impl_T<RTPortableServer::POA>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    RTPortableServer::POA_ptr _tao_elem
  )
{
  RTPortableServer::POA_ptr _tao_objptr =
    RTPortableServer::POA::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    RTPortableServer::POA_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<RTPortableServer::POA>::insert (
      _tao_any,
      RTPortableServer::POA::_tao_any_destructor,
      RTPortableServer::_tc_POA,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    RTPortableServer::POA_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<RTPortableServer::POA>::extract (
        _tao_any,
        RTPortableServer::POA::_tao_any_destructor,
        RTPortableServer::_tc_POA,
        _tao_elem
      );
}

TAO_END_VERSIONED_NAMESPACE_DECL
