#include "..\..\script_macros.hpp"
/*
    File: fn_bountyBonus.sqf
    Author: Valle

    Description:
	Bountyhunter gets Bonus when he delivers the Target near a bh office.
    
*/

private ["_Bonus","_uid"];
_Bonus = param [0,0];

life_atmbank = life_atmbank + _Bonus;
if (_Bonus > 0) then {
	hint format ["Du hast einen Bonus von %1$ bekommen!",_Bonus];
};
