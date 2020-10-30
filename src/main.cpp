//
// Bellerophon - Design Space Exploration for Approximate Computing technique using
// Gentic Algorithm
// Copyright (C) 2017 Antonio Tammaro <ntonjeta@autistici.org>
//
// This file is part of Bellerophon.
//
// Bellerophon is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bellerophon is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Bellerophon.  If not, see <http://www.gnu.org/licenses/>.
//

/******************************************************************************
 * @file    main.cpp
 * @author  Antonio Tammaro
 * @date    3 gen 2017
 * @brief   Bellerophon main file.
 * @details Basic steps:
 *          - Execute an external function
 *          -
 ******************************************************************************/
// Tool Headers
#include "Tool/BellerophonTool.h"
#include "Core/AprxContext.h"
// Plugin Headers
#include "Plugins/FLAP/FlapAprxContext.h"
#include "Plugins/FLAP/FlapAprxTechnique.h"
#include "Plugins/LoopPerforation/LoopAprxContext.h"
#include "Plugins/LoopPerforation/LoopAprxTechnique.h"
#include "Plugins/VPA/VpaAprxTechnique.h"
#include "Plugins/VPA/VpaAprxContext.h"
#include "Plugins/VPA_N/VpanAprxTechnique.h"
#include "Plugins/VPA_N/VpanAprxContext.h"
#include "Plugins/AxDCT/AxDCTAprxTechnique.h"
#include "Plugins/AxDCT/AxDCTAprxContext.h"
#include "Plugins/TRUNC/TruncAprxContext.h"
// C/C++ Headers
#include <cstdlib>

using namespace std;
using namespace bellerophon;
 
int main(int argc, const char *argv[]) {
  tool::BellerophonTool bellerophontool;

  //Register user's plugins
  bellerophontool.registerAprxContext(getFlapAprxContext());
  bellerophontool.registerAprxContext(getLoopAprxContext());
  bellerophontool.registerAprxContext(getVpaAprxContext());
  bellerophontool.registerAprxContext(getVpanAprxContext());
  bellerophontool.registerAprxContext(getAxDCTAprxContext());
  bellerophontool.registerAprxContext(getTruncAprxContext());
  // run tool 
  bellerophontool.run(argc,argv);
  return 0;
}

