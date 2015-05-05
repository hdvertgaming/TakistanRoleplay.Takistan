#include <macro.h>
/*
    File: fn_cigarette.sqf
    Author: Blaster

    Description:
    Cigarette effects.
*/

//Close inventory
closeDialog 0;


//Little hint then wait a little before starting drugs effects
hint "Without cigarettes, I would be doing heroin, probably, on a daily basis.";
sleep 1;

_smoke1 = "CMflareAmmo" createVehicle position player;if (vehicle player != player) then {
_smoke1 attachTo [vehicle player, [-0.6,-1,0]];} else {  
_smoke1 attachTo [player, [0,-0.1,1.5]];};


_smoke2 = "CMflareAmmo" createVehicle position player;if (vehicle player != player) then {
_smoke2 attachTo [vehicle player, [-0.6,-1,0]];} else {  
_smoke2 attachTo [player, [0,-0.1,1.5]];};
