//////////////////////////////////////////////////////////////////////////
//                           Autor: Valle                      			//
//////////////////////////////////////////////////////////////////////////
private ["_unit","_chair"];

if (_unit getVariable ["restrained",false]) exitWith {};
if (_unit getVariable ["isTazed",false]) exitWith {};
if(life_sitting) then{
    player switchMove "";
    life_sitting = false;
} else {
    _chair = cursorTarget;
    _unit = player;

    _unit setPos (getPos _chair); 
    _unit setDir ((getDir _chair) - 180); 
    //_unit setpos [getpos _unit select 0, getpos _unit select 1,((getpos _unit select 2) +1)];
	_unit setPosATL (getPosATL _chair);
	[player,"Crew",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "Crew";
    life_sitting = true;
};