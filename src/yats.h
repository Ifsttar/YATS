  /* ----------------------------------------------------------------------
   * YATS (http://github.com/Ifsttar/YATS). This file is part of YATS.
   *
   * YATS (Yet Another Traffic Simulation) is a simple and efficient
   * Traffic Simulator used for reasearch purpose
   * Copyright (C) 2013-2014 - IFSTTAR - Julien Saunier and Julien Gagneux
 
   * YATS is free software; you can redistribute it and/or modify
   * it under the terms of the GNU General Public License as published by
   * the Free Software Foundation; either version 3 of the License, or
   * (at your option) any later version.
   * 
   * YATS is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   * GNU General Public License for more details.
   * 
   * You should have received a copy of the GNU General Public License
   * along with this program; if not, write to the Free Software Foundation,
   * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA or 
   * see <http://ww.gnu.org/licenses/>
   *
   * For more information, please consult: <http://github.com/Ifsttar/YATS> or 
   * send an email to scientific.computing@ifsttar.fr
   *
   * To contact Ifsttar, write to Ifsttar, 14-20 Boulevard Newton
   * Cit� Descartes, Champs sur Marne F-77447 Marne la Vall�e Cedex 2 FRANCE
   * or write to scientific.computing@ifsttar.fr
   * ----------------------------------------------------------------------*/
   
   
// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
//

#pragma once

#include <stdio.h>
//#include <tchar.h>
#include <iostream>
#include <cstdlib>
//#include "stdlib.h"
#include "SDL.h"

#include <boost/filesystem.hpp>
#include <vector>
#include <sstream>
#include <time.h>
// math 
//#include <math.h>
#include <cmath>

// for the utilisation of Max() or min() fct
#include <algorithm> 

// for the utilisation of string and file
#include <string>
#include <fstream>
//#include <direct.h> // navigation dans les fichier windows _mkdir _rmdir
#include <ctime>

// SDLGFX
#include <SDL_rotozoom.h>


// classe interne au projet
#include "PointSim.h"
#include "Vehicle.h"
#include "SourceSim.h"
#include "Road.h"
#include "TimerSDL.h"
#include "NodeSim.h"
#include "EnvironmentSim.h"
#include "RoadLink.h"
//#include "VueEnvSim.h"

// TODO: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme
