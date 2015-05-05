#include <macro.h>
/*
        File: fn_spawnPointCfg.sqf
        Author: Bryan "Tonic" Boardwine
       
        Description:
        Master configuration for available spawn points depending on the units side.
       
        Return:
        [Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;
 
//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
        case west:
        {
 
                if(FETCH_CONST(life_coplevel) > 3) then {
                        _return = [["cop_spawn_2","TSF HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]];
                } else {
                        _return = [["cop_spawn_1","Nato HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]];
                };
 
        };
       
        case civilian:
        {
                if(life_is_alive) then {
					_return = [
						["civ_spawn_0","Last Location","\a3\ui_f\data\map\MapControl\viewtower_ca.paa"],
                        ["civ_spawn_1","Rasman","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
                        ["civ_spawn_2","Shukurkalay","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
					];
				}
					else
				{
					_return = [
                        ["civ_spawn_1","Rasman","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
                        ["civ_spawn_2","Shukurkalay","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
					];
				};
               
                if(count life_houses > 0) then {
                        {
                                _pos = call compile format["%1",_x select 0];
                                _house = nearestBuilding _pos;
                                _houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
                               
                                _return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
                        } foreach life_houses;
                };
				
				if(license_civ_rebel) then {
					_return pushback ["reb_spawn_1","Rebel Air Field","\a3\ui_f\data\map\MapControl\bunker_ca.paa"];
				};
				
				
        };
       
        case independent: {
                _return = [
                        ["medic_spawn_2","Rasman Hospital","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
                ];
        };
};
 
_return;