#include "..\..\script_macros.hpp"
/*
    File: fn_bountyLebend.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/

if ((player distance (getMarkerPos(Kopfgeld_1)) < 20) || (player distance (getMarkerPos(Kopfgeld_2)) < 20) || (player distance (getMarkerPos(Kopfgeld_3)) < 20)) then 
	{
		if (life_HC_isActive) then 
		{
			[getPlayerUID cursorTarget,cursorTarget,player,true] remoteExecCall ["HC_fnc_amountBounty",HC_Life];
			[getPlayerUID cursorTarget,cursorTarget,1,player] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
		} else {
			[getPlayerUID cursorTarget,cursorTarget,player,true] remoteExecCall ["life_fnc_amountBounty",RSERV];
			[getPlayerUID cursorTarget,cursorTarget,1,player] remoteExecCall ["life_fnc_bountyRemove",RSERV];
		};	
	} else {
		if (life_HC_isActive) then 
		{
			[getPlayerUID cursorTarget,cursorTarget,player,true] remoteExecCall ["HC_fnc_amountBounty",HC_Life];
			[getPlayerUID cursorTarget,cursorTarget] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
		} else {
			[getPlayerUID cursorTarget,cursorTarget,player,true] remoteExecCall ["life_fnc_amountBounty",RSERV];
			[getPlayerUID cursorTarget,cursorTarget] remoteExecCall ["life_fnc_bountyRemove",RSERV];
		};
	};

hint "Auf den Gefangenen gibt es zur Zeit kein Kopfgeld";
//Wenn gesucht dann direkt 5-10 min ins Gefängnis
