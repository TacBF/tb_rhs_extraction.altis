#include "tb_defines.hpp"

zoneList[] =
{
/*
ID and PROFILE = not used
LINK = zones capturable after this one
DEPEND = auto-capture/enable upon these zones being held
DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
SYNC = required zones for progression

OBJECTS
0 = Required Destroyed: 0 = all
1 = Required Randomized: 0 = all but not more than have been placed e.g. randomized TEs
2 = Spacing Distance
3 = Required Placed // TODO: very future development to allow placement of objects = capture e.g. new Convoy gamemode
4 = Place Object Type // TODO: very future development to allow placement of objects = capture e.g. new Convoy gamemode
*/
//ID TEAM          	SPAWNTYPE      		LINK    SYNC   OBJECTS   DEPEND      DEPQTY  	ZONE_DESC
{ 0, 0, 			0, 					{}, 	{}, 	{}, 		{}, 		0},
 
{ 1, TEAM_BLUE, 	SPAWN_XRAY, 		{}, 	{}, 	{}, 		{}, 		0, 			"UK Main Base" }, // blue main base

{ 2, TEAM_RED, 		SPAWN_XRAY, 		{}, 	{}, 	{}, 		{}, 		0, 			"Insurgents Main Base" }, // red main base
{ 3, TEAM_BLUE, 	SPAWN_INSTANT, 	{}, 	{}, 	{}, 		{1}, 		1, 			"Artillery Base Phoenix" } // spawnable FB


//SPAWN_LARGEFB = can spawn during Battle Preparation time
//SPAWN_INSTANT = CANNOT spawn during Battle Preparation time
//Note: Base deployment to FB is based on centre of zone not flag 
};




