#include "\life_server\script_macros.hpp"
/*
    File: fn_logging.sqf
    Author: Valle

    Description:
	Logs sth. 
*/
private _txt = param [0,"",[""]] call BIS_fnc_param;
//if !(_txt isEqualTo "") exitWith {};
diag_log _txt;