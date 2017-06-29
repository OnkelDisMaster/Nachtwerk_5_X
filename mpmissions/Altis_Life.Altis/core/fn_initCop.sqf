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
[] execVM "IgiLoad\IgiLoadInit.sqf";

[] spawn
	{
		while {true} do
		{
			waitUntil {uniform player == "U_Rangemaster"};
			player setObjectTextureGlobal [0,"skins\human\cop\NW_PD_uniform_KV"];
			waitUntil {uniform player != "U_Rangemaster"};
		};
	};
// CopLevel 2
[] spawn
	{
		while {true} do
		{
			waitUntil {uniform player == "U_B_CombatUniform_mcam_vest"};
			player setObjectTextureGlobal [0,"skins\human\cop\polizei_uniform.jpg"];
			waitUntil {uniform player != "U_B_CombatUniform_mcam_vest"};
		};
	};
// CopLevel 3+4
[] spawn
	{
		while {true} do
		{
			waitUntil {uniform player == "U_B_SpecopsUniform_sgg"};
			player setObjectTextureGlobal [0,"skins\human\cop\polizei2.jpg"];
			waitUntil {uniform player != "U_B_SpecopsUniform_sgg"};
		};
	};
// CopLevel 5
[] spawn
	{
		while {true} do
		{
			waitUntil {uniform player == "U_B_CombatUniform_mcam"};
			player setObjectTextureGlobal [0,"skins\human\cop\sek.jpg"];
			waitUntil {uniform player != "U_B_CombatUniform_mcam"};
		};
	};
// CopLevel 6
[] spawn
	{
		while {true} do
		{
			waitUntil {uniform player == "U_B_CombatUniform_mcam_worn"};
			player setObjectTextureGlobal [0,"skins\human\cop\sek_NW.paa"];
			waitUntil {uniform player != "U_B_CombatUniform_mcam_worn"};
		};
	};

player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_IntroCam;
