/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Queries to see if the player belongs to any gang.
*/
private["_query","_queryResult"];

<<<<<<< HEAD
_query = format["SELECT id, owner, name, maxmembers, bank, members FROM gangs WHERE active='1' AND members LIKE '%2%1%2'",_this,"%"];
=======
_query = format["gangInfo:%2%1%2",_this,"%"];
>>>>>>> origin/master

_queryResult = [_query,2,true] call DB_fnc_asyncCall;

<<<<<<< HEAD
if (count _queryResult != 0) then {
    _tmp = [_queryResult select 5] call DB_fnc_mresToArray;
    if (_tmp isEqualType "") then {_tmp = call compile format["%1", _tmp];};
    _queryResult set[5, _tmp];
};
missionNamespace setVariable[format["gang_%1",_this],_queryResult];
=======
if(count _queryResult > 0) then {
	missionNamespace setVariable[format["gang_%1",_this],_queryResult select 0];
}else{
	missionNamespace setVariable[format["gang_%1",_this],_queryResult];
};
>>>>>>> origin/master
