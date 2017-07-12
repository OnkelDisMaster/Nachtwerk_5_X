#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
player enableFatigue false;
_end = false;

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

//if (!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
    if ((FETCH_CONST(life_coplevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
        ["NotWhitelisted",false,true] call BIS_fnc_endMission;
        sleep 35;
    };
//};
[["blacklisted ground/sea vehicles"],["Blacklisted Choppers"]] execVM "core\vehicle\Lifting\lift_init.sqf";
[] execVM "core\vehicle\IgiLoad\IgiLoadInit.sqf";
[] call life_fnc_playerSkins;
//[player] remoteExec ['life_fnc_playerSkins',RCLIENT];

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
if (license_cop_hitmarker) then {life_hitmarker = true;};
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_IntroCam;
[] call life_fnc_initPayChecks;
