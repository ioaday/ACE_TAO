// -*- c++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO/tests/NestedUpCalls
//
// = FILENAME
//    server.h
//
// = DESCRIPTION
//      This class implements a simple NestedUpCalls CORBA server for
//      the NestedUpCalls example using skeletons generated by the TAO
//      ORB compiler.
//
// = AUTHORS
//    Nagarajan Surendran (naga@cs.wustl.edu)
//
// ============================================================================

#ifndef TAO_NUC_SERVER_H
#define TAO_NUC_SERVER_H

#include "ace/Get_Opt.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Log_Msg.h"
#include "tao/TAO.h"
#include "reactor_i.h"

class NestedUpCalls_Server
{
  // = TITLE
  //   Defines a NestedUpCalls Server class that implements the functionality
  //   of a server process as an object.
  //
  // = DESCRIPTION
  //   The interface is quite simple. A server program has to call
  //   init to initialize the NestedUpCalls_Server's state and then call run
  //   to run the orb.
public:

  NestedUpCalls_Server (void);
  // Default constructor

  ~NestedUpCalls_Server (void);
  // Destructor

  int init (int argc,
            char *argv[],
            CORBA::Environment& env);
  // Initialize the NestedUpCalls_Server state - parsing arguments and ...

  int run (CORBA::Environment& env);
  // Run the orb

private:
  int parse_args (void);
  // Parses the commandline arguments.

  int init_naming_service (CORBA::Environment &env);
  // Initialises the name server and registers NestedUpCalls reactor with the
  // name server.

  FILE* ior_output_file_;
  // File to output the NestedUpCalls reactor IOR.

  TAO_ORB_Manager orb_manager_;
  // The ORB manager

  Reactor_i reactor_impl_;
  // Implementation object of the NestedUpCalls reactor.

  Reactor_var reactor_;
  // Reactor_var to register with NamingService.

  int argc_;
  // Number of commandline arguments.

  char **argv_;
  // commandline arguments.
};

#endif /* TAO_NUC_SERVER_H */
