/*
    File: fn_kopfgeldVar.sqf
    Author: Valle

    Description:
	Sets Var if player is on bounty list.
    
*/
private ["_bounty","_zahl","_query","_queryResult"];
_bounty = param [0,false,[false]];
_zahl = param [1,0, [0]];

if (_bounty) then {
	player setVariable["hatKopfgeld",true,true];
	hint "_bounty = true";
} else {
	player setVariable["hatKopfgeld",false,true];
	hint "_bounty = false";
};

//hint "Test";
//hint format["LifeServer Var: %1 , Client Var: %2", _bounty, (player getVariable "hatKopfgeld")];
//CASH = CASH + 1337;