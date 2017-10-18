#include "..\..\script_macros.hpp"
/*
    File: fn_bountyLebend.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/

_bountyZiel = param [0,ObjNull,[ObjNull]];
_spieler = param [1,ObjNull,[ObjNull]];

if ((_spieler distance (getMarkerPos(Kopfgeld_1)) < 20) || (_spieler distance (getMarkerPos(Kopfgeld_2)) < 20) || (_spieler distance (getMarkerPos(Kopfgeld_3)) < 20)) then 
	{
	hint "test";
		if (life_HC_isActive) then 
		{
			[getPlayerUID _bountyZiel] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
			[getPlayerUID _bountyZiel,_bountyZiel,_spieler,true,true] remoteExecCall ["HC_fnc_amountBounty",HC_Life];			
		} else {
			[getPlayerUID _bountyZiel] remoteExecCall ["life_fnc_bountyRemove",RSERV];
			[getPlayerUID _bountyZiel,_bountyZiel,_spieler,true,true] remoteExecCall ["life_fnc_amountBounty",RSERV];			
		};	
	} else {
		if (life_HC_isActive) then 
		{
			[getPlayerUID _bountyZiel,_bountyZiel,_spieler,true,false] remoteExecCall ["HC_fnc_amountBounty",HC_Life];
			[getPlayerUID _bountyZiel] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
		} else {
			[getPlayerUID _bountyZiel,_bountyZiel,_spieler,true,false] remoteExecCall ["life_fnc_amountBounty",RSERV];
			[getPlayerUID _bountyZiel] remoteExecCall ["life_fnc_bountyRemove",RSERV];
		};
	};

//hint "Auf den Gefangenen gibt es zur Zeit kein Kopfgeld";
//Wenn gesucht dann direkt 5-10 min ins Gefängnis
