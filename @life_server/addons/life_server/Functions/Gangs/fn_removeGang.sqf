/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Blah
*/
private["_group","_groupID"];
<<<<<<< HEAD
_group = param [0,grpNull,[grpNull]];
if (isNull _group) exitWith {};
=======
_group = [_this,0,grpNull,[grpNull]] call BIS_fnc_param;
if(isNull _group) exitWith {};
>>>>>>> origin/master

_groupID = _group getVariable["gang_id",-1];
if(_groupID == -1) exitWith {};

<<<<<<< HEAD
[format["UPDATE gangs SET active='0' WHERE id='%1'",_groupID],1] call DB_fnc_asyncCall;

_result = [format["SELECT id FROM gangs WHERE active='1' AND id='%1'",_groupID],2] call DB_fnc_asyncCall;
if (count _result isEqualTo 0) then {
    [_group] remoteExecCall ["life_fnc_gangDisbanded",(units _group)];
    uiSleep 5;
    deleteGroup _group;
};
["CALL deleteOldGangs",1] call DB_fnc_asyncCall;
=======

[format["gangRemove:%1",_groupID],2] call DB_fnc_asyncCall;

[[_group],"life_fnc_gangDisbanded",(units _group),false] call life_fnc_MP;
sleep 5;
deleteGroup _group;
>>>>>>> origin/master
