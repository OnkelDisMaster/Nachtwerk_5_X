#include "..\..\script_macros.hpp"
/*
    File: fn_bountyHunterReceive.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 

    Description:
    Notifies the bounty hunter he has killed the person with the bounty and was rewarded with the bounty.
*/
private ["_val","_bonus"];
_val = [_this,0,"",["",0]] call BIS_fnc_param;
_bonus = param [1,0, [0]];

	titleText[format [localize "STR_Bounty_BountyKill",[_val] call life_fnc_numberText,_bonus],"PLAIN"];

BANK = BANK + _val + _bonus;
[1] call SOCK_fnc_updatePartial;