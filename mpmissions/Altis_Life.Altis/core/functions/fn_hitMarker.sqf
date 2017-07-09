#include "..\..\script_macros.hpp"
/*
    File: fn_hitMarker.sqf
    Author: Jake Hazelwood

    Description:
    Gives shooter a hitmarker when they've hit another player.
*/
disableSerialization;
private["_unit","_source"];
_unit = _this select 0;
_source = _this select 3;
If (isServer) exitWith {};

if (!isNull _source) then {
	if ((_source != _unit) && (_unit isEqualTo player)) then {
		disableSerialization;
		"someLayer" cutRsc ["Life_hitmarker", "PLAIN"];
		_display = uiNamespace getVariable "Life_hitmarker";
    };
};