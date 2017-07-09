#include "..\..\script_macros.hpp"
/*
    File: fn_hitMarker.sqf
    Author: Jake Hazelwood

    Description:
    Gives shooter a hitmarker when they've hit another player.
*/
disableSerialization;
if (!isNull player) then {
			disableSerialization;
			"someLayer" cutRsc ["Life_hitmarker", "PLAIN"];
			_display = uiNamespace getVariable "Life_hitmarker";
};