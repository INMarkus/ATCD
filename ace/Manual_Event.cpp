// $Id$

#include "ace/Manual_Event.h"

#if !defined (__ACE_INLINE__)
#include "ace/Manual_Event.inl"
#endif /* __ACE_INLINE__ */


ACE_RCSID(ace, Manual_Event, "$Id$")

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_Manual_Event::ACE_Manual_Event (int initial_state,
                                    int type,
                                    const char *name,
                                    void *arg)
  : ACE_Event (1,
               initial_state,
               type,
               ACE_TEXT_TO_TCHAR_IN (name),
               arg)
{
}

ACE_Manual_Event::ACE_Manual_Event (int initial_state,
                                    int type,
                                    const wchar_t *name,
                                    void *arg)
  : ACE_Event (1,
               initial_state,
               type,
               ACE_TEXT_TO_TCHAR_IN (name),
               arg)
{
}

void
ACE_Manual_Event::dump (void) const
{
#if defined (ACE_HAS_DUMP)
  ACE_Event::dump ();
#endif /* ACE_HAS_DUMP */
}

ACE_END_VERSIONED_NAMESPACE_DECL
