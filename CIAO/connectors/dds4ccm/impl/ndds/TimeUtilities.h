// $Id$

//=============================================================================
/**
 *  @file    Time_Utilities.h
 *
 *  $Id$
 *
 *  @author  Marcel Smit <msmit@remedy.nl>
 */
//=============================================================================


#ifndef DDS4CCM_TIME_UTILITIES_H
#define DDS4CCM_TIME_UTILITIES_H

#include "ace/Time_Value.h"

/*
  TIME_T
  long sec;
  unsigned long nanosec;

  ACE_TIME_VALUE
  time_t sec,
  suseconds_t usec );
*/

inline void
operator<<= (::DDS::Time_t & dds_time, const ::ACE_Time_Value & ace_time)
{
  dds_time.sec = ace_time.sec ();
  dds_time.nanosec = ace_time.usec () * 1000;
}

inline void
operator<<= (::ACE_Time_Value & ace_time, const ::DDS::Time_t &dds_time)
{
  ace_time.sec (dds_time.sec);
  ace_time.usec (dds_time.nanosec/1000);
}

inline void
operator>>= (const ::DDS::Time_t & dds_time, ::ACE_Time_Value & ace_time)
{
  ace_time.sec (dds_time.sec);
  ace_time.usec (dds_time.nanosec/1000);
}

inline void
operator>>= (const ::ACE_Time_Value & ace_time, ::DDS::Time_t &dds_time)
{
  dds_time.sec = ace_time.sec ();
  dds_time.nanosec = ace_time.usec () * 1000;
}



#endif /* DDS4CCM_TIME_UTILITIES_H */
