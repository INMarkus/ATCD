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
// be/be_codegen.cpp:151

#ifndef _TAO_IDL_ORIG_IORTABLEC_H_
#define _TAO_IDL_ORIG_IORTABLEC_H_

#include /**/ "ace/pre.h"

#include "tao/corbafwd.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "iortable_export.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Object.h"
#include "tao/Exception.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_IORTable_Export

#if defined (TAO_EXPORT_NESTED_CLASSES)
#  if defined (TAO_EXPORT_NESTED_MACRO)
#    undef TAO_EXPORT_NESTED_MACRO
#  endif /* defined (TAO_EXPORT_NESTED_MACRO) */
#  define TAO_EXPORT_NESTED_MACRO TAO_IORTable_Export
#endif /* TAO_EXPORT_NESTED_CLASSES */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option push -w-rvl -w-rch -w-ccc -w-inl
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:63

namespace TAO
{
  class Collocation_Proxy_Broker;
}

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:48

namespace IORTable
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:601

#if !defined (_IORTABLE_LOCATOR__VAR_OUT_CH_)
#define _IORTABLE_LOCATOR__VAR_OUT_CH_

  class Locator;
  typedef Locator *Locator_ptr;

  typedef
    TAO_Objref_Var_T<
        Locator
      >
    Locator_var;

  typedef
    TAO_Objref_Out_T<
        Locator
      >
    Locator_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:51

#if !defined (_IORTABLE_ALREADYBOUND_CH_)
#define _IORTABLE_ALREADYBOUND_CH_

  class TAO_IORTable_Export AlreadyBound : public CORBA::UserException
  {
  public:

    AlreadyBound (void);
    AlreadyBound (const AlreadyBound &);
    ~AlreadyBound (void);

    AlreadyBound &operator= (const AlreadyBound &);

    static AlreadyBound *_downcast (CORBA::Exception *);
    static CORBA::Exception *_alloc (void);

    virtual CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const ;

    virtual void _tao_encode (
        TAO_OutputCDR &
        ACE_ENV_ARG_DECL
      ) const;

    virtual void _tao_decode (
        TAO_InputCDR &
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:125
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_exception/exception_ch.cpp:51

#if !defined (_IORTABLE_NOTFOUND_CH_)
#define _IORTABLE_NOTFOUND_CH_

  class TAO_IORTable_Export NotFound : public CORBA::UserException
  {
  public:

    NotFound (void);
    NotFound (const NotFound &);
    ~NotFound (void);

    NotFound &operator= (const NotFound &);

    static NotFound *_downcast (CORBA::Exception *);
    static CORBA::Exception *_alloc (void);

    virtual CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (
        TAO_OutputCDR &
        ACE_ENV_ARG_DECL
      ) const;

    virtual void _tao_decode (
        TAO_InputCDR &
        ACE_ENV_ARG_DECL
      );

    // TAO_IDL - Generated from
    // be/be_visitor_exception/exception_ch.cpp:125
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_interface.cpp:601

#if !defined (_IORTABLE_TABLE__VAR_OUT_CH_)
#define _IORTABLE_TABLE__VAR_OUT_CH_

  class Table;
  typedef Table *Table_ptr;

  typedef
    TAO_Objref_Var_T<
        Table
      >
    Table_var;

  typedef
    TAO_Objref_Out_T<
        Table
      >
    Table_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:53

#if !defined (_IORTABLE_TABLE_CH_)
#define _IORTABLE_TABLE_CH_

  class TAO_IORTable_Export Table
    : public virtual CORBA::Object
  {
  public:
    typedef Table_ptr _ptr_type;
    typedef Table_var _var_type;

    // The static operations.
    static Table_ptr _duplicate (Table_ptr obj);

    static Table_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static Table_ptr _nil (void)
      {
        return (Table_ptr)0;
      }



    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void bind (
        const char * object_key,
        const char * IOR
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IORTable::AlreadyBound
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void rebind (
        const char * object_key,
        const char * IOR
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void unbind (
        const char * object_key
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IORTable::NotFound
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual void set_locator (
        IORTable::Locator_ptr the_locator
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:185

    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    Table (void);
    virtual ~Table (void);

  private:
    Table (const Table &);
    void operator= (const Table &);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:53

#if !defined (_IORTABLE_LOCATOR_CH_)
#define _IORTABLE_LOCATOR_CH_

  class TAO_IORTable_Export Locator
    : public virtual CORBA::Object
  {
  public:
    typedef Locator_ptr _ptr_type;
    typedef Locator_var _var_type;

    // The static operations.
    static Locator_ptr _duplicate (Locator_ptr obj);

    static Locator_ptr _narrow (
        CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    static Locator_ptr _nil (void)
      {
        return (Locator_ptr)0;
      }



    // TAO_IDL - Generated from
    // be/be_visitor_operation/operation_ch.cpp:46

    virtual char * locate (
        const char * object_key
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        CORBA::SystemException
        , IORTable::NotFound
      )) = 0;

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:185

    virtual CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );

    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);

  protected:
    Locator (void);
    virtual ~Locator (void);

  private:
    Locator (const Locator &);
    void operator= (const Locator &);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:66

} // module IORTable

// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:48

// Traits specializations.
namespace TAO
{
};

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:48

#ifndef __ACE_INLINE__

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:52

TAO_IORTable_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const IORTable::AlreadyBound &);
TAO_IORTable_Export CORBA::Boolean operator>> (TAO_InputCDR &, IORTable::AlreadyBound &);

// TAO_IDL - Generated from
// be/be_visitor_exception/cdr_op_ch.cpp:52

TAO_IORTable_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const IORTable::NotFound &);
TAO_IORTable_Export CORBA::Boolean operator>> (TAO_InputCDR &, IORTable::NotFound &);

// TAO_IDL - Generated from
// be/be_visitor_root/cdr_op.cpp:64

#endif /* __ACE_INLINE__ */

// TAO_IDL - Generated from
// be/be_codegen.cpp:969

#if defined (__ACE_INLINE__)
#include "IORTableC.i"
#endif /* defined INLINE */

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#if defined (__BORLANDC__)
#pragma option pop
#endif /* __BORLANDC__ */

#include /**/ "ace/post.h"
#endif /* ifndef */
