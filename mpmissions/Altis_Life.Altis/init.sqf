/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

//Polizeilicht
emergLight_vehicles = [];
{
        emergLight_vehicles pushBack (configName _x);
} forEach ("true" configClasses (missionConfigFile >> "emergLightVehicles"));

StartProgress = true;