// $Id$

#ifndef TAO_FIXED_ARRAY_SARGUMENT_T_C
#define TAO_FIXED_ARRAY_SARGUMENT_T_C

#include "tao/Fixed_Array_SArgument_T.h"

#if !defined (__ACE_INLINE__)
#include "tao/Fixed_Array_SArgument_T.inl"
#endif /* __ACE_INLINE__ */

ACE_RCSID (tao,
           Fixed_Array_SArgument_T,
           "$Id$")

template<typename S, typename S_forany>
CORBA::Boolean
TAO::In_Fixed_Array_SArgument_T<S,S_forany>::demarshal (TAO_InputCDR &cdr)
{
  S_forany tmp (this->x_);
  return cdr >> tmp;
}

template<typename S, typename S_forany>
void
TAO::In_Fixed_Array_SArgument_T<S,S_forany>::interceptor_param (
    Dynamic::Parameter & p
  )
{
  p.argument <<= S_forany (this->x_);
  p.mode = CORBA::PARAM_IN;
}

// ===========================================================

template<typename S, typename S_forany>
CORBA::Boolean
TAO::Inout_Fixed_Array_SArgument_T<S,S_forany>::marshal (TAO_OutputCDR & cdr)
{
  return cdr << S_forany (this->x_);
}

template<typename S, typename S_forany>
CORBA::Boolean
TAO::Inout_Fixed_Array_SArgument_T<S,S_forany>::demarshal (TAO_InputCDR & cdr)
{
  S_forany tmp (this->x_);
  return cdr >> tmp;
}

template<typename S, typename S_forany>
void
TAO::Inout_Fixed_Array_SArgument_T<S,S_forany>::interceptor_param (
    Dynamic::Parameter & p
  )
{
  p.argument <<= S_forany (this->x_);
  p.mode = CORBA::PARAM_INOUT;
}

// ==============================================================

template<typename S, typename S_forany>
CORBA::Boolean
TAO::Out_Fixed_Array_SArgument_T<S,S_forany>::marshal (TAO_OutputCDR &cdr)
{
  return cdr << S_forany (this->x_);
}

template<typename S, typename S_forany>
void
TAO::Out_Fixed_Array_SArgument_T<S,S_forany>::interceptor_param (
    Dynamic::Parameter & p
  )
{
  p.argument <<= S_forany (this->x_);
  p.mode = CORBA::PARAM_OUT;
}

// ============================================================

template<typename S_slice, typename S_var, typename S_forany>
CORBA::Boolean
TAO::Ret_Fixed_Array_SArgument_T<S_slice,S_var,S_forany>::marshal (
    TAO_OutputCDR & cdr
  )
{
  return cdr << S_forany (this->x_.inout ());
}

template<typename S_slice, typename S_var, typename S_forany>
void
TAO::Ret_Fixed_Array_SArgument_T<S_slice,S_var,S_forany>::interceptor_result (
    CORBA::Any * any
  )
{
  (*any) <<= S_forany (this->x_.ptr ());
}

#endif /* TAO_FIXED_ARRAY_SARGUMENT_T_C */
