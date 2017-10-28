#include "..\..\script_macros.hpp"
/*
    File: fn_bountyBetrag.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/
_bountyZiel = param [0,ObjNull,[ObjNull]];
_spieler = param [1,ObjNull,[ObjNull]];
_betrag = param [2,1];
	
if (_betrag isEqualTo 1) then	//wenn abgefragt, dann noch kein betrag
{
	[_bountyZiel,_spieler] remoteExecCall ["life_fnc_bountyGetBetrag",RSERV];	//rufe betrag ab
} else {	//bekomme Betrag zurück
	if (_betrag isEqualTo 0) then
	{
		hint "Das Ziel hat kein Kopfgeld";
	} else {
		hint format ["Das Ziel hat ein Kopfgeld von $%1",[_betrag] call life_fnc_numberText];
	};
};