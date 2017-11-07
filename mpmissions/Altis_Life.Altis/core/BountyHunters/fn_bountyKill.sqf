#include "..\..\script_macros.hpp"
/*
    File: fn_bountyKill.sqf
    Author: !TS JORDAN
	Modified by Valle @Nachtwerk Community
	
    Description:
    Removes the bounty on a selected player.
*/
private ["_Kopfgeld","_delKopfgeld","_display","_list"];
disableSerialization;
if !(license_civ_bountyH) exitWith {hint "Nur eingetragene Kopfgeldjäger können Kopfgelder entfernen!"};
_display = findDisplay 9700;
_list = _display displayCtrl 9720;
_data = lbData[9710,(lbCurSel 9710)];
_data = call compile format ["%1", _data];
if (isNil "_data") exitWith {};
if (!(_data isEqualType [])) exitWith {};
if (_data isEqualTo []) exitWith {};
private _remover = getPlayerUID player;
private _removed = _data select 0;

if (_remover isEqualTo _removed) exitWith {hint "Du kannst dich nicht selbst von der Kopfgeldliste entfernen!"};

_Kopfgeld = tempKopfgeld;
_delKopfgeld = (_Kopfgeld * 1.5);
	
if (life_atmbank > _delKopfgeld) then 
{
	life_atmbank = life_atmbank - _delKopfgeld;
	[1] call SOCK_fnc_updatePartial;
	
	if (life_HC_isActive) then {
		[(_data select 0),_Kopfgeld] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
	} else {
		[(_data select 0),_Kopfgeld] remoteExecCall ["life_fnc_bountyRemove",RSERV];
	};
	hint format ["Du hast %1$ Kopfgeld für %2$ entfernt",[_Kopfgeld] call life_fnc_numberText,[_delKopfgeld] call life_fnc_numberText];
} else {
	hint format ["Du hast nicht genügend Geld auf dem Konto um %1$ Kopfgeld zu entfernen!",[_Kopfgeld] call life_fnc_numberText];
};