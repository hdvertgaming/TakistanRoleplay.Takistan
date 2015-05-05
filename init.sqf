StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "/core/fn_statusBar.sqf";

StartProgress = true;

// Check if user is in TFR
[] spawn {
	waitUntil {alive player};
	while {true} do {
		_server = [] call TFAR_fnc_getTeamSpeakServerName;
		_channel = [] call TFAR_fnc_getTeamSpeakChannelName;

		if(_server != "NerdsRPG - NERDSRPG.COM" or _channel != "TaskForceRadio") then {
			cutText["Please join the TeamSpeak Server and join the TFR channel - ts3.nerdsrpg.com","BLACK",0,true];
			waitUntil {([] call TFAR_fnc_getTeamSpeakServerName) == "NerdsRPG - NERDSRPG.COM" and ([] call TFAR_fnc_getTeamSpeakChannelName) == "TaskForceRadio"};
			cutText["","PLAIN"];
		};

		sleep 1;
	};
};