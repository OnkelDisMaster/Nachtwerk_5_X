#include "\life_server\script_macros.hpp"
/*
	File: fn_insertRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something with inserting... Don't have time for
	descriptions... Need to write it...
*/
<<<<<<< HEAD
private["_queryResult","_query","_alias"];
params [
    "_uid",
    "_name",
    ["_money",-1,[0]],
    ["_bank",-1,[0]],
    ["_returnToSender",objNull,[objNull]]
];
=======
private["_uid","_name","_side","_money","_bank","_licenses","_handler","_thread","_queryResult","_query","_alias"];
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_money = [_this,2,0,[""]] call BIS_fnc_param;
_bank = [_this,3,50000,[""]] call BIS_fnc_param;
_returnToSender = [_this,4,ObjNull,[ObjNull]] call BIS_fnc_param;
>>>>>>> origin/master

//Error checks
if((_uid == "") OR (_name == "")) exitWith {systemChat "Bad UID or name";}; //Let the client be 'lost' in 'transaction'
if(isNull _returnToSender) exitWith {systemChat "ReturnToSender is Null!";}; //No one to send this to!

<<<<<<< HEAD
_query = format["SELECT playerid, name FROM players WHERE playerid='%1'",_uid];


_tickTime = diag_tickTime;
_queryResult = [_query,2] call DB_fnc_asyncCall;

if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log "------------- Insert Query Request -------------";
    diag_log format["QUERY: %1",_query];
    diag_log format["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)];
    diag_log format["Result: %1",_queryResult];
    diag_log "------------------------------------------------";
};

//Double check to make sure the client isn't in the database...
if (_queryResult isEqualType "") exitWith {[] remoteExecCall ["SOCK_fnc_dataQuery",(owner _returnToSender)];}; //There was an entry!
if (count _queryResult != 0) exitWith {[] remoteExecCall ["SOCK_fnc_dataQuery",(owner _returnToSender)];};
=======
_query = format["playerInfo:%1",_uid];


_tickTime = diag_tickTime;
_queryResult = [_query,2,true] call DB_fnc_asyncCall;

if((EQUAL(EXTDB_SETTINGS("MySQL_Query"),1))) then {
	["diag_log",[
		"------------- Insert Query Request -------------",
		format["QUERY: %1",_query],
		format["Time to complete: %1 (in seconds)",(diag_tickTime - _tickTime)],
		format["Result: %1",_queryResult],
		"------------------------------------------------"
	]] call TON_fnc_logIt;
};

//Double check to make sure the client isn't in the database...
if(typeName _queryResult == "STRING") exitWith {[[],"SOCK_fnc_dataQuery",(owner _returnToSender),false] call life_fnc_MP;}; //There was an entry!
if(count _queryResult != 0) exitWith {[[],"SOCK_fnc_dataQuery",(owner _returnToSender),false] call life_fnc_MP;};
>>>>>>> origin/master

//Clense and prepare some information.
_alias = [[_name]];
_money = [_money] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;

//Prepare the query statement..
<<<<<<< HEAD
_query = format["INSERT INTO players (playerid, name, cash, bankacc, aliases, cop_licenses, med_licenses, civ_licenses, civ_gear, cop_gear, med_gear) VALUES('%1', '%2', '%3', '%4', '%5','""[]""','""[]""','""[]""','""[]""','""[]""','""[]""')",
    _uid,
    _name,
    _money,
    _bank,
    _alias
=======
_query = format["playerInfoInsert:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11",
	_uid,
	_name,
	_money,
	_bank,
	_alias,
	[],	// Cop Licenses
    [], // Med Licenses
    [], // Civ Licenses
    [], // Civ Gear
    [], // Cop Gear
    []  // Med Gear
>>>>>>> origin/master
];


[_query,1] call DB_fnc_asyncCall;
[[],"SOCK_fnc_dataQuery",(owner _returnToSender),false] call life_fnc_MP;
