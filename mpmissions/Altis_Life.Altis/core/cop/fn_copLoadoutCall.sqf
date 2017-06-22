#include "..\..\script_macros.hpp"
/*
fn_copLoadoutCall.sqf

AUTHOR: OnkelDisMaster (afo-odin.com) && Valle
VERSION: v1.2 Dez 2016

Aufgerufen in init mit: this addAction[""Loadoutauswahl"", life_fnc_copLoadoutCall];
*/
createDialog "life_loadout_selector";

// Determine available loadouts

_loadouts = [];

if ((call (life_coplevel)) > 0) then {
	_loadouts = _loadouts + ["Rekruten Bank/ Tanken Loadout"];
};

if ((call (life_coplevel)) >= 2) then {
	_loadouts = _loadouts + ["MP5 Loadout"];
};

if ((call (life_coplevel)) >= 3) then {
	_loadouts = _loadouts + ["MX-3GL Loadout"];
};

if ((call (life_coplevel)) >= 4) then {
	_loadouts = _loadouts + ["MX-SW Loadout"];
};

if ((call (life_coplevel)) >= 5) then {
	_loadouts = _loadouts + ["SPAR-16-S Loadout"];
};

if ((call (life_coplevel)) >= 6) then {
	_loadouts = _loadouts + ["CAR-95-1 Loadout"];
};

if ((call (life_coplevel)) >= 7) then {
	_loadouts = _loadouts + ["Spar-17 Loadout"];
};

if ((call (life_coplevel)) >= 7) then {
	_loadouts = _loadouts + ["AK-12-GL Loadout"];
};

if ((call (life_coplevel)) >= 7) then {
	_loadouts = _loadouts + ["MK18 Loadout"];
};

if ((call (life_coplevel)) >= 9) then {
	_loadouts = _loadouts + ["Typ115 Loadout"];
};

if ((call (life_coplevel)) >= 9) then {
	_loadouts = _loadouts + ["Zafir Loadout"];
};

if ((call (life_coplevel)) >= 9) then {
	_loadouts = _loadouts + ["MK200 Loadout"];
};
	
if ((call (life_coplevel)) >= 9) then {
	_loadouts = _loadouts + ["LRR Loadout"];
};	
	
if ((call (life_coplevel)) >= 12) then {
	_loadouts = _loadouts + ["Valles Loadout"];
};

if ((call (life_coplevel)) >= 12) then {
	_loadouts = _loadouts + ["Valles Loadout Type115"];
};

// Fill Listbox
{ lbAdd [77403,_x] } forEach _loadouts;

