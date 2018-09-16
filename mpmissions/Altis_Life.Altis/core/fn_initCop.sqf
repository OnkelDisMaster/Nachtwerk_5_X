#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
waitUntil {!(isNull (findDisplay 46))};
player enableFatigue false;

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0) || (playerSide != west)) then {
    ["NotWhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};


player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];

[["blacklisted ground/sea vehicles"],["Blacklisted Choppers"]] execVM "core\vehicle\Lifting\lift_init.sqf";
[] execVM "core\vehicle\IgiLoad\IgiLoadInit.sqf";

[player] remoteExecCall ["life_fnc_hatBounty",RSERV];	//Bounty Var set

if (license_cop_hitmarker) then {life_hitmarker = true;};
[] spawn life_fnc_IntroCam;
[] call life_fnc_welcome;
[] call life_fnc_playerSkins;
[] call life_fnc_initPayChecks;
[] call life_fnc_nightvision;


[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

