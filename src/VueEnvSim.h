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
   * Cité Descartes, Champs sur Marne F-77447 Marne la Vallée Cedex 2 FRANCE
   * or write to scientific.computing@ifsttar.fr
   * ----------------------------------------------------------------------*/
   
   
#pragma once

#include "Road.h"
#include "NodeSim.h"

class VueEnvSim
{
public:

	// CTor & DTor
	VueEnvSim(/*int n*/);
	~VueEnvSim(void);

	// display 
	void printingMyWyList();

	// get & set
	void setRoad(Road * r);
	void setNode(NodeSim * n);
	void setRoadLink(RoadLink * r);
	Road * getRoad();
	NodeSim * getNodeSim();
	RoadLink * getRoadLink();
	bool isNextRoadLinkSet();
	RoadLink * getNextRoadLink();
	int getMyWaySize();
	RoadLink * getMyWayItemAt(int i);
	void setMyWayLastItem(RoadLink * rl);
	float getDistToBeAtDesiredSpeed(float actualVehicleSpeed, RoadLink * r,float accelr);

	// processing
	void chooseNextRoadLink();
	void supAndDecalFistItemOfMyWay();

private:
	Road * m_road;
	NodeSim * m_node;
	RoadLink * m_RoadLink;

	// recent add 
	vector<RoadLink *> myWay;
	RoadLink * focusRoadLink;

	// need to be delet
	RoadLink * m_NextRoadLink;
};

