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

// TAO_IDL - Generated from
// be\be_codegen.cpp:291


#include "tao/BiDir_GIOP/BiDirGIOP.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:69

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for BiDirPolicy::BidirectionalPolicy.

BiDirPolicy::BidirectionalPolicy_ptr
TAO::Objref_Traits<BiDirPolicy::BidirectionalPolicy>::duplicate (
    BiDirPolicy::BidirectionalPolicy_ptr p
  )
{
  return BiDirPolicy::BidirectionalPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<BiDirPolicy::BidirectionalPolicy>::release (
    BiDirPolicy::BidirectionalPolicy_ptr p
  )
{
  ::CORBA::release (p);
}

BiDirPolicy::BidirectionalPolicy_ptr
TAO::Objref_Traits<BiDirPolicy::BidirectionalPolicy>::nil (void)
{
  return BiDirPolicy::BidirectionalPolicy::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<BiDirPolicy::BidirectionalPolicy>::marshal (
    BiDirPolicy::BidirectionalPolicy_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

BiDirPolicy::BidirectionalPolicy::BidirectionalPolicy (void)
{}

BiDirPolicy::BidirectionalPolicy::~BidirectionalPolicy (void)
{}

BiDirPolicy::BidirectionalPolicy_ptr
BiDirPolicy::BidirectionalPolicy::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return BidirectionalPolicy::_nil ();
    }

  BidirectionalPolicy_ptr proxy =
    dynamic_cast<BidirectionalPolicy_ptr> (_tao_objref);

  return BidirectionalPolicy::_duplicate (proxy);
}

BiDirPolicy::BidirectionalPolicy_ptr
BiDirPolicy::BidirectionalPolicy::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return BidirectionalPolicy::_nil ();
    }

  BidirectionalPolicy_ptr proxy =
    dynamic_cast<BidirectionalPolicy_ptr> (_tao_objref);

  return BidirectionalPolicy::_duplicate (proxy);
}

BiDirPolicy::BidirectionalPolicy_ptr
BiDirPolicy::BidirectionalPolicy::_duplicate (BidirectionalPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

void
BiDirPolicy::BidirectionalPolicy::_tao_release (BidirectionalPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

CORBA::Boolean
BiDirPolicy::BidirectionalPolicy::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/BiDirPolicy/BidirectionalPolicy:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* BiDirPolicy::BidirectionalPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/BiDirPolicy/BidirectionalPolicy:1.0";
}

CORBA::Boolean
BiDirPolicy::BidirectionalPolicy::marshal (TAO_OutputCDR &)
{
  return false;
}

TAO_END_VERSIONED_NAMESPACE_DECL
