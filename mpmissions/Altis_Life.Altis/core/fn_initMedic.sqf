#include "..\script_macros.hpp"
/*
    File: fn_initMedic.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the medic..
*/
waitUntil {!(isNull (findDisplay 46))};
player enableFatigue false;

if ((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

	removeAllWeapons player;
	player forceAddUniform "U_B_CombatUniform_mcam";
	player setObjectTextureGlobal [0,"skins\human\medic\FW_Uniform.paa"];
	player addBackpackGlobal "B_Kitbag_sgg";
	(unitBackpack player) setObjectTextureGlobal [0,"skins\human\medic\FW_backpack.paa"];
	player addItem "ItemMap";
	player assignItem "ItemMap";
	player addItem "ItemGPS";
	player assignItem "ItemGPS";
	player addItem "ToolKit";
	player addItem "Medikit";

[["blacklisted ground/sea vehicles"],["B_Heli_Light_01_F"]] execVM "core\vehicle\Lifting\lift_init.sqf";
[] execVM "core\vehicle\IgiLoad\IgiLoadInit.sqf";

[] call life_fnc_playerSkins;
[] spawn life_fnc_IntroCam;
[] call life_fnc_welcome;
[] call life_fnc_initPayChecks;

[] call life_fnc_nightvision;

[player] remoteExecCall ["life_fnc_hatBounty",RSERV];

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
