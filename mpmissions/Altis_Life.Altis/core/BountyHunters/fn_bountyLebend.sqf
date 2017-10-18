#include "..\..\script_macros.hpp"
/*
    File: fn_bountyLebend.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/

_spieler = param [0,0];

if ((player distance (getMarkerPos(Kopfgeld_1)) < 20) || (player distance (getMarkerPos(Kopfgeld_2)) < 20) || (player distance (getMarkerPos(Kopfgeld_3)) < 20)) then 
	{
		if (life_HC_isActive) then 
		{
			[getPlayerUID _spieler] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
			[getPlayerUID _spieler,_spieler,player,true,true] remoteExecCall ["HC_fnc_amountBounty",HC_Life];			
		} else {
			[getPlayerUID _spieler] remoteExecCall ["life_fnc_bountyRemove",RSERV];
			[getPlayerUID _spieler,_spieler,player,true,true] remoteExecCall ["life_fnc_amountBounty",RSERV];			
		};	
	} else {
		if (life_HC_isActive) then 
		{
			[getPlayerUID _spieler,_spieler,player,true,false] remoteExecCall ["HC_fnc_amountBounty",HC_Life];
			[getPlayerUID _spieler] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
		} else {
			[getPlayerUID _spieler,_spieler,player,true,false] remoteExecCall ["life_fnc_amountBounty",RSERV];
			[getPlayerUID _spieler] remoteExecCall ["life_fnc_bountyRemove",RSERV];
		};
	};

hint "Auf den Gefangenen gibt es zur Zeit kein Kopfgeld";
//Wenn gesucht dann direkt 5-10 min ins Gefängnis
