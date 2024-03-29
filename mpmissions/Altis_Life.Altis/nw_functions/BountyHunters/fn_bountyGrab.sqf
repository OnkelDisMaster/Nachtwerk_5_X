#include "..\..\script_macros.hpp"
/*
    File: fn_bountyGrab.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 
	
    Description:
    Prepare the array to query the bounty list. 
*/
private ["_display","_tab","_criminal"];
disableSerialization;
_display = findDisplay 9700;
_tab = _display displayCtrl 9720;
_criminal = lbData[9710,(lbCurSel 9710)];
_criminal = call compile format ["%1", _criminal];
if (isNil "_criminal") exitWith {};

if (life_HC_isActive) then {
    [player,_criminal] remoteExec ["HC_fnc_bounCrimes",HC_Life];
} else {
    [player,_criminal] remoteExec ["life_fnc_bountyCrimes",RSERV];
};
