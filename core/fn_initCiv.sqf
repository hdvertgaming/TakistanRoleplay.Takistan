#include <macro.h>
/*
File: fn_initCiv.sqf
Author: Bryan "Tonic" Boardwine

Description:
Initializes the civilian.
*/
private["_spawnPos","_playerPos"];
_playerPos = last_position;

civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_House_C_10_EP1","Land_House_C_9_EP1","Land_House_C_3_EP1","Land_House_C_11_EP1"],250];
civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_House_C_10_EP1","Land_House_C_9_EP1","Land_House_C_3_EP1","Land_House_C_11_EP1"],250];

if(license_civ_rebel) then {
	reb_spawn_1 = nearestObjects[getMarkerPos  "reb_spawn_1", ["Land_House_C_10_EP1","Land_House_C_9_EP1","Land_House_C_3_EP1","Land_House_C_11_EP1"],1000];
};
	
	waitUntil {!(isNull (findDisplay 46))};

if(life_is_arrested) then
{
	life_is_arrested = false;
	[player,true] spawn life_fnc_jail;
}
	else
{
	if (life_is_alive) then
	{
			_m = createMarkerLocal ["civ_spawn_0",_playerPos];
			_m setMarkerTypeLocal "Empty";
			civ_spawn_0 = nearestObjects[getMarkerPos  "civ_spawn_0", ["Land_House_C_10_EP1","Land_House_C_9_EP1","Land_House_C_3_EP1","Land_House_C_11_EP1"],2000]; //hopefully there is a damn house within 2k
	};
	
	[] call life_fnc_spawnMenu;
	waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
        
};




life_is_alive = true;
player addRating 9999999;