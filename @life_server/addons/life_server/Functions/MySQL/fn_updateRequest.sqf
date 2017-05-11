/*
	File: fn_updateRequest.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Ain't got time to describe it, READ THE FILE NAME!
*/
<<<<<<< HEAD
private["_uid","_side","_cash","_bank","_licenses","_gear","_stats","_name","_alive","_position","_query","_thread"];
=======
private["_uid","_side","_cash","_bank","_licenses","_gear","_name","_query","_thread"];
>>>>>>> origin/master
_uid = [_this,0,"",[""]] call BIS_fnc_param;
_name = [_this,1,"",[""]] call BIS_fnc_param;
_side = [_this,2,sideUnknown,[civilian]] call BIS_fnc_param;
_cash = [_this,3,0,[0]] call BIS_fnc_param;
_bank = [_this,4,5000,[0]] call BIS_fnc_param;
_licenses = [_this,5,[],[[]]] call BIS_fnc_param;
_gear = [_this,6,[],[[]]] call BIS_fnc_param;
<<<<<<< HEAD
_stats = [_this,7,[100,100],[[]]] call BIS_fnc_param;
_alive = [_this,9,0,[0]] call BIS_fnc_param;
_position = [_this,10,[],[[]]] call BIS_fnc_param;
=======
>>>>>>> origin/master

//Get to those error checks.
if((_uid == "") OR (_name == "")) exitWith {};

//Parse and setup some data.
_cash = [_cash] call DB_fnc_numberSafe;
_bank = [_bank] call DB_fnc_numberSafe;

//Does something license related but I can't remember I only know it's important?
for "_i" from 0 to count(_licenses)-1 do {
	_bool = [(_licenses select _i) select 1] call DB_fnc_bool;
	_licenses set[_i,[(_licenses select _i) select 0,_bool]];
};

switch (_side) do {
<<<<<<< HEAD
    case west: {_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', cop_gear='%4', cop_licenses='%5', cop_stats='%6', playtime='%7' WHERE playerid='%8'",_name,_cash,_bank,_gear,_licenses,_stats,_playtime_update,_uid];};
    case civilian: {_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', civ_licenses='%4', civ_gear='%5', arrested='%6', civ_stats='%7', civ_alive='%8', civ_position='%9', playtime='%10' WHERE playerid='%11'",_name,_cash,_bank,_licenses,_gear,[_this select 8] call DB_fnc_bool,_stats,[_this select 9] call DB_fnc_bool,_position,_playtime_update,_uid];};
    case independent: {_query = format["UPDATE players SET name='%1', cash='%2', bankacc='%3', med_licenses='%4', med_gear='%5', med_stats='%6', playtime='%7' WHERE playerid='%8'",_name,_cash,_bank,_licenses,_gear,_stats,_playtime_update,_uid];};
=======
	case west: {_query = format["playerWestUpdate:%1:%2:%3:%4:%5:%6",_name,_cash,_bank,_gear,_licenses,_uid];};
	case civilian: {_query = format["playerCivilianUpdate:%1:%2:%3:%4:%6:%7:%5",_name,_cash,_bank,_licenses,_uid,_gear,[_this select 7] call DB_fnc_bool];};
	case independent: {_query = format["playerIndependentUpdate:%1:%2:%3:%4:%6:%5",_name,_cash,_bank,_licenses,_uid,_gear];};
>>>>>>> origin/master
};


_queryResult = [_query,1] call DB_fnc_asyncCall;