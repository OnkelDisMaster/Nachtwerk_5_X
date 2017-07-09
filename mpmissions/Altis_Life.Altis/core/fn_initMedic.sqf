#include "..\script_macros.hpp"
/*
    File: fn_initMedic.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};
player enableFatigue false;

if ((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
    ["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
    sleep 35;
};

if (LIFE_SETTINGS(getNumber,"restrict_medic_weapons") isEqualTo 1) then {
    [] spawn {
        for "_i" from 0 to 1 step 0 do {
            waitUntil {sleep 3; currentWeapon player != ""};
            removeAllWeapons player;
        };
    };
};
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player forceAddUniform "U_B_CombatUniform_mcam";
	player setObjectTextureGlobal [0,"skins\human\medic\FW_Uniform.paa"];
	player addBackpackGlobal "B_Kitbag_sgg";
	(unitBackpack player) setObjectTextureGlobal [0,"skins\human\medic\FW_backpack.paa"];
	player addItem "ToolKit";
	player addItem "Medikit";

[["blacklisted ground/sea vehicles"],["B_Heli_Light_01_F"]] execVM "core\vehicle\Lifting\lift_init.sqf";
[] execVM "core\vehicle\IgiLoad\IgiLoadInit.sqf";

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_IntroCam;
[] call life_fnc_initPayChecks;
[] call life_fnc_playerSkins;

// Uniformen Texturen START
[] spawn
{
while {true} do
    {
        waitUntil {uniform player == "U_B_CombatUniform_mcam"};
        player setObjectTextureGlobal [0,"skins\human\medic\FW_Uniform.paa"];
		uiSleep 10;
    };
};
