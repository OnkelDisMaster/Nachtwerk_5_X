#include "..\..\script_macros.hpp"
/*
    File: fn_bountyMenu.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA

    Description:
    Opens the Bounty menu.
*/
disableSerialization;
if(playerSide == west) exitWith {};
if(playerSide == independent) exitWith {};
if(!license_civ_bountyH) exitWith {
	hint "Nur eingetragene Kopfgeldjäger können die Kopfgeld Datenbank benutzen!";
};

createDialog "life_bounty_menu";

private _display = findDisplay 9700;
private _list = _display displayCtrl 9710;
private _players = _display displayCtrl 9760;
private _units = [];

lbClear _list;
lbClear _players;

{
    private _side = switch (side _x) do {case west: {"Cop"}; case civilian : {"Civ"}; default {"Unknown"};};
    _players lbAdd format ["%1 - %2", name _x,_side];
    _players lbSetdata [(lbSize _players)-1,str(_x)];
} forEach playableUnits;

private _list2 = CONTROL(9700,9770);
lbClear _list2; //Purge the list

/*
private _crimes = LIFE_SETTINGS(getArray,"crimes");
{
  if (isLocalized (_x select 0)) then {
    _list2 lbAdd format ["%1 - $%2 (%3)",localize (_x select 0),(_x select 1),(_x select 2)];
  } else {
    _list2 lbAdd format ["%1 - $%2 (%3)",(_x select 0),(_x select 1),(_x select 2)];
  };
    _list2 lbSetData [(lbSize _list2)-1,(_x select 2)];
};forEach _crimes;
*/

ctrlSetText[9740,"Baue Verbindung auf..."];

/*
if (FETCH_CONST(life_coplevel) < 3 && {FETCH_CONST(life_adminlevel) isEqualTo 0}) then {
    ctrlShow[975,false];
};
*/

if (life_HC_isActive) then {
    [player] remoteExec ["HC_fnc_bountyFetch",HC_Life];
} else {
    [player] remoteExec ["life_fnc_bountyFetch",RSERV];
};
