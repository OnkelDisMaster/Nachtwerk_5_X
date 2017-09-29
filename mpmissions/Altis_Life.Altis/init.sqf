/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
private ["_i"];
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "core\functions\fn_teargas.sqf"; //Load Teargas Script for Cops
[] execVM "nw_functions\savezone.sqf"; //Load the Savezones
[] execVM "nw_functions\fn_statusBar.sqf"; //Load the Statusbar
if(hasInterface)then{[] execVM "voiceControl.sqf"};
//Polizeilicht
emergLight_vehicles = [];
{
    emergLight_vehicles pushBack (configName _x);
} forEach ("true" configClasses (missionConfigFile >> "emergLightVehicles"));

/*
[] spawn 
{
	for [{_i=0}, {_i < 12}, {_i = _i + 1}] do 
	{
		sleep (60*30);
		[] spawn life_fnc_randomDealer;
	};
};
*/

StartProgress = true;