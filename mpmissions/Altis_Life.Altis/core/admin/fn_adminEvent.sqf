#include "..\..\script_macros.hpp"
/*
    File: fn_adminEvent.sqf
    Author: Valle1337

    Description:
    Toggles Event Mode.
*/
if (FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0; hint "Du hast dafür keine Berechtigung";};
switch (life_Event) do
{
	case true: {life_Event = false; hint "Event Modus deaktiviert"; closeDialog 0;};
	case false: {life_Event = true; hint "Event Modus aktiviert"  ; closeDialog 0;};
	default {life_Event = false; hint "Event Modus deaktiviert"; closeDialog 0;};
};
