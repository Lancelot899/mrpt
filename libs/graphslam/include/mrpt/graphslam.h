/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2014, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#ifndef _mrpt_graphslam_H
#define _mrpt_graphslam_H

// Graph SLAM: Common headers
#include <mrpt/graphslam/types.h>

// Graph SLAM: Batch solvers
#include <mrpt/graphslam/levmarq.h>

// Graph SLAM: Online solvers
#include <mrpt/graphslam/GraphSlamEngine.h>

// Implementations of GraphSlamEngine<...,F2F_MATCH,...>
#include <mrpt/graphslam/f2f_match_icp_2d.h> 

#endif
