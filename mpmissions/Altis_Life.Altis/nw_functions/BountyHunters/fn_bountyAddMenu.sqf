#include "..\..\script_macros.hpp"
/*
    File: fn_bountyAddMenu.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 

    Description:
    Opens the Bounty add menu.
*/
private _num = true;
disableSerialization;
//if(playerSide == west) exitWith {};
//if(playerSide == independent) exitWith {};

createDialog "life_bounty_Addmenu";

private _display = findDisplay 97000;
private _list = _display displayCtrl 97100;
private _players = _display displayCtrl 97600;
private _units = [];

lbClear _list;
lbClear _players;

{
    private _side = switch (side _x) do {case west: {"Cop"}; case civilian : {"Civ"}; default {"Unknown"};};
    _players lbAdd format ["%1 - %2", name _x,_side];
    _players lbSetdata [(lbSize _players)-1,str(_x)];
} forEach playableUnits;

private _list2 = CONTROL(97000,97700);
lbClear _list2; //Purge the list


private _bounty = LIFE_SETTINGS(getArray,"bountys");
{
  if (isLocalized (_x select 0)) then {
    _list2 lbAdd format ["%1",localize (_x select 0)];
  } else {
    _list2 lbAdd format ["%1",(_x select 0)];
  };
    _list2 lbSetData [(lbSize _list2)-1,(_x select 1)];
} forEach _bounty;
