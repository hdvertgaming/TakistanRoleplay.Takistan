/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information
*/

waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

4 cutRsc ["osefStatusBar","PLAIN"]; 

[] spawn {
	sleep 1;
	while {true} do
	{
		sleep 1; 
		
		((uiNamespace getVariable "osefStatusBar") displayCtrl 1000) ctrlSetText
		parseText format["<t color="#DF7401">||</t> <t color="#585858">Uptime: %1</t> <t color="#DF7401">|</t> <t color="#0101DF">Cops: %2</t><t color="#DF7401">|</t> <t color="#8A0868">Civs: %3 </t><t color="#DF7401">|</t> <t color="#DF0101">Medics: %4</t><t color="#DF7401">|</t> <t color="#01DF01">Cash: %5</t><t color="#DF7401">|</t> <t color="#585858">FPS: %6</t><t color="#DF7401">||</t>", 
			serverTime,
			round diag_fps, 
			west countSide playableUnits,
			civilian countSide playableUnits,
			independent countSide playableUnits,
			[life_cash] call life_fnc_numberText
		];
	}; 
};
