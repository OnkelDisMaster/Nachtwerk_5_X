#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)

CONST(BIS_fnc_endMission,BIS_fnc_endMission);

if (hasInterface) then {
    player addEventHandler ["GetOutMan", {
        life_seatbelt = false;
        [] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

if (hasInterface) then {
    player addEventHandler ["GetInMan", {
        life_seatbelt = false;
        [] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

//Illegale Marker nicht für Cops

if (playerSide isEqualTo west) then 
{
    private["_illegalmarkers"];

    _illegalmarkers = ["heroin_1","cocaine_1","cocaine_2","weed_1","meth_1"];
    
    { deleteMarkerLocal _x; } forEach _illegalmarkers;
};

[] execVM "core\init.sqf";
