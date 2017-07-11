#include "..\..\script_macros.hpp"
/*
    File: fn_hitMarker.sqf
    Author: Jake Hazelwood
	Modified by Valle1337

    Description:
    Gives shooter a hitmarker when they've hit another player.
*/
_unit = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
disableSerialization;

if (!isNull player) then {
	if (player != _unit) then
	{
			disableSerialization;
			"someLayer" cutRsc ["Life_hitmarker", "PLAIN"];
			_display = uiNamespace getVariable "Life_hitmarker";
	};
};