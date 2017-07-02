#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Retrains the target.
*/
private["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
// if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
//Broadcast!

if((life_inv_kabelbinder < 1) && (side player isEqualTo civilian)) exitWith { hintSilent "Du hast keine Kabelbinder bei dir !"; };

if (side player isEqualTo civilian) then {
	if(life_inv_kabelbinder < 1) exitWith { hintSilent "Du hast keine Kabelbinder bei dir !"; };
	life_inv_kabelbinder = life_inv_kabelbinder - 1;
	hintSilent "Du hast jemanden festgenommen...";
};

_unit setVariable["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit getVariable["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];