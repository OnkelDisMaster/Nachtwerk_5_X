//////////////////////////////////////////////////////////////////////////
//                            Script Made By                            //
//                                MacRae                                //
//                                                                      //
//                           MODIFIED BY XETOXYC                        //
//////////////////////////////////////////////////////////////////////////
if (_unit getVariable ["restrained",false]) exitWith {};
if (_unit getVariable ["isTazed",false]) exitWith {};
if(life_sitting) then{
    player switchMove "";
    life_sitting = false;
} else {
    _chair = cursorTarget;
    _unit = player;

	[_unit,"Crew","switch",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
    _unit setPos (getPos _chair); 
    _unit setDir ((getDir _chair) - 180); 
    _unit setpos [getpos _unit select 0, getpos _unit select 1,((getpos _unit select 2) +1)];
    life_sitting = true;
};