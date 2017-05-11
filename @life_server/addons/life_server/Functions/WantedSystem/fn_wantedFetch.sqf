/*
	File: fn_wantedFetch.sqf
	Author: Bryan "Tonic" Boardwine"
	
	Description:
	Displays wanted list information sent from the server.
*/
<<<<<<< HEAD
private["_ret","_list","_result","_queryResult","_units","_inStatement"];
_ret = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if (isNull _ret) exitWith {};
_ret = owner _ret;
_inStatement = "";
_list = [];
_units = [];
{if ((side _x) isEqualTo civilian) then {_units pushBack (getPlayerUID _x)};} forEach playableUnits;

if (count _units isEqualTo 0) exitWith {[_list] remoteExec ["life_fnc_wantedList",_ret];};

{
    if (count _units > 1) then {
    if (_inStatement isEqualTo "") then {
            _inStatement = "'" + _x + "'";
        } else {
            _inStatement = _inStatement + ", '" + _x + "'";
        };
    } else {
    _inStatement = _x;
    };
} forEach _units;

_query = format["SELECT wantedID, wantedName FROM wanted WHERE active='1' AND wantedID in (%1)",_inStatement];
_queryResult = [_query,2,true] call DB_fnc_asyncCall;
if (EXTDB_SETTING(getNumber,"DebugMode") isEqualTo 1) then {
    diag_log format["Query: %1",_query];
};
=======
private["_ret","_list","_jailedUnits"];
_ret = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _ret) exitWith {};

_ret = owner _ret;
_jailedUnits = [];
{if(_x distance (getMarkerPos "jail_marker") < 120) then {_jailedUnits pushBack getPlayerUID _x}} forEach playableUnits;
>>>>>>> origin/master

_list = [];
{
<<<<<<< HEAD
    _list pushBack (_x);
}
forEach _queryResult;

if (count _list isEqualTo 0) exitWith {[_list] remoteExec ["life_fnc_wantedList",_ret];};

[_list] remoteExec ["life_fnc_wantedList",_ret];
=======
	_uid = _x select 1;
	if([_uid] call life_fnc_isUIDActive) then
	{
		if(!(_uid in _jailedUnits)) then {
			_list pushBack _x;
		};
	};
} foreach life_wanted_list;
[[_list],"life_fnc_wantedList",_ret,false] spawn life_fnc_MP;
>>>>>>> origin/master
