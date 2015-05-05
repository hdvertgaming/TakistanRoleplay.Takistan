#include <macro.h>
/*
	File: fn_medicYelp.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the cop siren sound for other players
*/

private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {};
if(isNil {_vehicle GVAR "yelp"}) exitWith {};

while {true} do {
	if(!(_vehicle GVAR "yelp")) exitWith {};
	if(EQUAL(count crew _vehicle,0)) then {_vehicle SVAR ["yelp",false,true]};
	if(!alive _vehicle) exitWith {};
	if(isNull _vehicle) exitWith {};
	_vehicle say3D "yelp";
	sleep 1.25;
	if(!(_vehicle GVAR "yelp")) exitWith {};
};