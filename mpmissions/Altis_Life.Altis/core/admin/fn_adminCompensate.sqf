#include "..\..\script_macros.hpp"
/*
    File: fn_adminCompensate.sqf
    Author: ColinM9991

    Description:
    Figure it out.
*/
private["_value","_action","_name","_uid"];
if (FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
_value = parseNumber(ctrlText 9922);
if (_value < 0) exitWith {};
if (_value > 999999) exitWith {hint localize "STR_ANOTF_Fail"};

_name = player getVariable ["realname",name player];
_uid = getPlayerUID player;

_action = [
    format [localize "STR_ANOTF_CompWarn",[_value] call life_fnc_numberText],
    localize "STR_Admin_Compensate",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
    CASH = CASH + _value;
	_value = [_value] call life_fnc_numberText;
	//[format ["Supporter: %1 | %2 | hat %3 $ angefordert",_name,_uid,_value]] remoteExec ["TON_fnc_logging",RSERV];
    hint format [localize "STR_ANOTF_Success",_value];
    closeDialog 0;
} else {
    hint localize "STR_NOTF_ActionCancel";
    closeDialog 0;
};
