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


#include "tao/TimeBaseC.h"
#include "tao/CDR.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:70

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from 
// be\be_visitor_structure/structure_cs.cpp:66

void 
TimeBase::UtcT::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  UtcT *_tao_tmp_pointer =
    static_cast<UtcT *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from 
// be\be_visitor_structure/structure_cs.cpp:66

void 
TimeBase::IntervalT::_tao_any_destructor (
    void *_tao_void_pointer
  )
{
  IntervalT *_tao_tmp_pointer =
    static_cast<IntervalT *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from
// be\be_visitor_structure/cdr_op_cs.cpp:61

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TimeBase::UtcT &_tao_aggregate
  )
{
  return
    (strm << _tao_aggregate.time) &&
    (strm << _tao_aggregate.inacclo) &&
    (strm << _tao_aggregate.inacchi) &&
    (strm << _tao_aggregate.tdf);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TimeBase::UtcT &_tao_aggregate
  )
{
  return
    (strm >> _tao_aggregate.time) &&
    (strm >> _tao_aggregate.inacclo) &&
    (strm >> _tao_aggregate.inacchi) &&
    (strm >> _tao_aggregate.tdf);
}

// TAO_IDL - Generated from
// be\be_visitor_structure/cdr_op_cs.cpp:61

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TimeBase::IntervalT &_tao_aggregate
  )
{
  return
    (strm << _tao_aggregate.lower_bound) &&
    (strm << _tao_aggregate.upper_bound);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TimeBase::IntervalT &_tao_aggregate
  )
{
  return
    (strm >> _tao_aggregate.lower_bound) &&
    (strm >> _tao_aggregate.upper_bound);
}

TAO_END_VERSIONED_NAMESPACE_DECL
