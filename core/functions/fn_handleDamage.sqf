#include <macro.h>
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_projectile in ["DDOPP_B_Taser","B_9x21_Ball","B_556x45_dual"] && _curWep in ["DDOPP_X26","hgun_P07_snds_F","arifle_SDAR_F"]) then {
			if(side _source == west && playerSide != west) then {
				private["_distance","_isVehicle","_isQuad"];
				_distance = if(_projectile == "B_556x45_dual") then {100} else {35};
				_isVehicle = if(vehicle player != player) then {true} else {false};
				_isQuad = if(_isVehicle) then {if(typeOf (vehicle player) == "B_Quadbike_01_F") then {true} else {false}} else {false};
				
				_damage = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !(_unit GVAR ["restrained",false])) then {
						if(_isVehicle && _isQuad) then {
							player action ["Eject",vehicle player];
							[_unit,_source] spawn life_fnc_tazed;
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};
			
			//Temp fix for super tasers on cops.
			if(playerSide == west && side _source == west) then {
				_damage = false;
			};
		};
		if(_projectile in ["B_9x21_Ball"] && _curWep in ["SMG_02_F","SMG_02_ACO_F","SMG_02_ARCO_pointg_F"]) then {
			//copied from taser source
			if(side _source == west && playerSide != west) then {
				private["_distance","_isVehicle","_isQuad"];
				_isVehicle = if(vehicle player != player) then {true} else {false};
				_damage = false;
				_damageHandle = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !(_unit GVAR ["restrained",false])) then {
						if(_isVehicle && _isQuad) then {
							player action ["Eject",vehicle player];
							[_unit,_source] spawn life_fnc_knockedOut;
						} else {
							[_unit,_source] spawn life_fnc_knockedOut;
						};
					};
				};
				if(!(_isVehicle && !life_istazed)) then {
					//Copy a knocking out function instead of using the tazing function on the server
					[player,"Rubber Bullet",true] spawn life_fnc_knockedOut;
				};	
			};
			
			//Change _damagae = true to false if you do not want cops to kill eachother with these. _damagaHandle is being used also so they take no damage aswell.
			if(playerSide == west && side _source == west) then {
				_damage = false;
				_damageHandle = false;
			};
		};
	};
};

[] call life_fnc_hudUpdate;
_damage;