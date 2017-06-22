#include "..\..\script_macros.hpp"
/*
    File: fn_pardon.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pardons the selected player.
*/
private["_display","_list","_data"];
disableSerialization;
if (playerSide != west) exitWith {};

_display = findDisplay 2400;
_list = _display displayCtrl 2402;
_data = lbData[2401,(lbCurSel 2401)];

[_data] remoteExecCall ["life_fnc_wantedRemove",RSERV];