// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file     Server_Strategy_Factory.h
 *
 *  $Id$
 *
 *  @author  Chris Cleeland
 */
//=============================================================================

#ifndef TAO_SERVER_STRATEGY_FACTORY_H
#define TAO_SERVER_STRATEGY_FACTORY_H
#include /**/ "ace/pre.h"

#include "tao/corbafwd.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Service_Object.h"

class TAO_Active_Object_Map_Impl;
class TAO_Reverse_Active_Object_Map_Impl;
class TAO_ORB_Core;

enum TAO_Demux_Strategy
{
  TAO_LINEAR,
  TAO_DYNAMIC_HASH,
  TAO_ACTIVE_DEMUX,
  TAO_USER_DEFINED
};

/**
 * @class TAO_Server_Strategy_Factory
 *
 * @brief Base class for the server's abstract factory that manufactures
 * various strategies of special utility to it.  This simply
 * serves as an interface to a subclass that REALLY gets
 * specified and loaded by the Service Configurator.
 */
class TAO_Export TAO_Server_Strategy_Factory : public ACE_Service_Object
{
public:

  struct Active_Object_Map_Creation_Parameters
  {
    /// Constructor.
    Active_Object_Map_Creation_Parameters (void);

    CORBA::ULong active_object_map_size_;
    // Default size of object lookup table.

    TAO_Demux_Strategy object_lookup_strategy_for_user_id_policy_;
    // The type of lookup/demultiplexing strategy being used for user
    // id policy

    TAO_Demux_Strategy object_lookup_strategy_for_system_id_policy_;
    // The type of lookup/demultiplexing strategy being used for
    // system id policy

    TAO_Demux_Strategy reverse_object_lookup_strategy_for_unique_id_policy_;
    // The type of reverse lookup/demultiplexing strategy being used
    // for the UNIQUE_ID policy

    int use_active_hint_in_ids_;
    // Flag to indicate whether the active hint should be used with
    // the IOR.

    int allow_reactivation_of_system_ids_;
    // Flag to indicate whether reactivations of servants was required
    // (under the system id policy).  If not, certain resources may
    // not be required.

    CORBA::ULong poa_map_size_;

    TAO_Demux_Strategy poa_lookup_strategy_for_transient_id_policy_;

    TAO_Demux_Strategy poa_lookup_strategy_for_persistent_id_policy_;

    int use_active_hint_in_poa_names_;
  };

  // = Initialization and termination methods.
  /// Constructor.
  TAO_Server_Strategy_Factory (void);

  /// Destructor.
  virtual ~TAO_Server_Strategy_Factory(void);

  /**
   * Call <open> on various strategies.  This is not performed in
   * <init> so that the other portions of the ORB have a chance to
   * "settle" in their initialization since the streategies herein
   * might need some of that information.
   */
  virtual int open (TAO_ORB_Core* orb_core);

  /// Enable POA locking?
  virtual int enable_poa_locking (void);

  /// Are server connections active (i.e. run in their own thread)
  virtual int activate_server_connections (void);

  /**
   * Obtain the timeout value used by the thread-per-connection server
   * threads to poll the shutdown flag in the ORB.
   * Return -1 if the ORB should use the compile-time defaults.
   * If the return value is zero then the threads block without
   * timeouts.
   */
  virtual int thread_per_connection_timeout (ACE_Time_Value &timeout);

  /// The thread activation parameters
  virtual int server_connection_thread_flags (void);
  virtual int server_connection_thread_count (void);

  /// Return the active object map creation parameters.
  virtual const Active_Object_Map_Creation_Parameters &active_object_map_creation_parameters (void) const;

protected:

  /// Active object map creation parameters.
  Active_Object_Map_Creation_Parameters active_object_map_creation_parameters_;
};

#include /**/ "ace/post.h"
#endif /* TAO_SERVER_STRATEGY_FACTORY_H */
