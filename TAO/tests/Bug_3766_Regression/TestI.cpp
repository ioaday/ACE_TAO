// -*- C++ -*-
//
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.4
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 *       http://doc.ece.uci.edu/
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from 
// .\be\be_codegen.cpp:1422

#include "TestI.h"

// Implementation skeleton constructor
Test_i::Test_i (void)
{
}

// Implementation skeleton destructor
Test_i::~Test_i (void)
{
}

void Test_i::do_something_FixedLength (
  ::FixedLengthInfo_out my_info)
{
  // Add your implementation here
  my_info.a = 1;
  my_info.b = 2;
  my_info.c = 3;
}

void Test_i::do_something_VariableLength (
  ::VariableLengthInfo_out my_info)
{
  // Add your implementation here
  my_info = new ::VariableLengthInfo;
  my_info->a = 1;
  my_info->b = 2;
  my_info->c = 3;
  my_info->d = ::CORBA::string_dup("Howdy");
}


