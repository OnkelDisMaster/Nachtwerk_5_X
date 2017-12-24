/*
    File: fn_logging.sqf
    Author: Valle

    Description:
	Logs sth. 
*/
private _txt = param [0,"",[""]];
//if !(_txt isEqualTo "") exitWith {};
diag_log _txt;