#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile PreprocessFileLineNumbers "\life_hc\initHC.sqf";
}; //This is a headless client.

#define CONST(var1,var2) var1 = compileFinal (if (var2 isEqualType "") then {var2} else {str(var2)})
#define LIFE_SETTINGS(TYPE,SETTING) TYPE(missionConfigFile >> "Life_Settings" >> SETTING)



[] execVM "core\init.sqf";
[] execVM "voiceControl.sqf";
//Illegale Marker nicht für Cops

    if (playerSide == west) then 
		{
            private["_illegalmarkers"];
            while {true} do
            {
                    _illegalmarkers = ["heroin_1","cocaine_1","cocaine_2","weed_1","meth_1","Dealer_1_1","Dealer_1_2","Dealer_1_3"];
                    
                    { deleteMarkerLocal _x; } forEach _illegalmarkers;
                    sleep 10;
            };
		};