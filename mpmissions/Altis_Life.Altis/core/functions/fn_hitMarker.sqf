#include "..\..\script_macros.hpp"
/*
    File: fn_hitMarker.sqf
    Author: Jake Hazelwood

    Description:
    Gives shooter a hitmarker when they've hit another player.
*/
disableSerialization;
_unit = this select 0;
if (!isNull player) then {
	if (_unit != player) then {
			disableSerialization;
			"someLayer" cutRsc ["Life_hitmarker", "PLAIN"];
			_display = uiNamespace getVariable "Life_hitmarker";
    };
};