#include "..\..\script_macros.hpp"
/*
    File: fn_wantedGrab.sqf
    Author: ColinM

    Description:
    Prepare the array to query the crimes.
*/
private["_display","_tab","_criminal"];
disableSerialization;
_display = findDisplay 2400;
_tab = _display displayCtrl 2402;
_criminal = [_this,0,[],[[]]] call BIS_fnc_param;
_criminalID = getPlayerUID _criminal
//_criminal = call compile format["%1", _criminal];
if (isNil "_criminal") exitWith {};

//if (life_HC_isActive) then {
//    [player,_criminal] remoteExec ["HC_fnc_wantedCrimes",HC_Life];
//} else {
    [player,_criminalID] remoteExec ["life_fnc_wantedCrimes",RSERV];
//};
