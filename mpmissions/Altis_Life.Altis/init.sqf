/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "nw_functions\savezone.sqf"; //Load the Savezones
[] execVM "nw_functions\fn_statusBar.sqf"; //Load the Statusbar

//Polizeilicht
emergLight_vehicles = [];
{
        emergLight_vehicles pushBack (configName _x);
} forEach ("true" configClasses (missionConfigFile >> "emergLightVehicles"));

StartProgress = true;