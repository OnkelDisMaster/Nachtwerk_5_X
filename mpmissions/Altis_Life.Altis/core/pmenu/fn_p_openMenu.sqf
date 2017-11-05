#include "..\..\script_macros.hpp"
/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch (playerSide) do {
    case west: {
        ctrlShow[2011,false];
		ctrlShow[3025,false];
		ctrlShow[9800,true];
		ctrlShow[888898,true];
		ctrlShow[1210,true];
        ctrlShow[2050,true];
    };

    case civilian: {
        ctrlShow[2012,false];
        ctrlShow[9800,false];
		ctrlShow[3024,false];
		ctrlShow[1210,true];
		ctrlShow[2050,true];
    };

    case independent: {
        ctrlShow[2012,false];
        ctrlShow[2011,false];
		ctrlShow[3025,false];
		ctrlShow[9800,false];
		ctrlShow[3024,false];
		ctrlShow[1210,true];
		ctrlShow[2050,true];
    };
};

if ((call life_adminlevel) < 1) then {
    ctrlShow[2020,false];
    ctrlShow[2021,false];
} else {
    ctrlShow[2020,true];
    ctrlShow[2021,true];
};

if ((license_civ_bountyH) && (playerSide isEqualTo civilian)) then {
	ctrlShow[9696,true];
	ctrlShow[9898,true];
} else {
	ctrlShow[9696,false];
	ctrlShow[9898,false];
};

[] call life_fnc_p_updateMenu;
