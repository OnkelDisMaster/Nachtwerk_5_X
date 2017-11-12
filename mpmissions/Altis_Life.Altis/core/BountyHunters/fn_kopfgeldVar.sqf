/*
    File: fn_kopfgeldVar.sqf
    Author: Valle

    Description:
	Sets Var if player is on bounty list.
    
*/
private ["_bounty","_zahl","_query","_queryResult"];
_bounty = param [0,false,[false]];
_zahl = param [1,0, [0]];

if (_bounty) then {player setvariable ["hatKopfgeld",true,true];} else {player setvariable ["hatKopfgeld",false,true];};

diag_log format ["Zahl: %1",_zahl];
diag_log format ["#2 %1 hat die KopfgeldVar %2",profilename,_bounty];

hint "Test";
[0,"Aufruf von kopfgeldVar-Datei ..."] remoteExecCall ["life_fnc_broadcast",RCLIENT];
CASH = 1337;