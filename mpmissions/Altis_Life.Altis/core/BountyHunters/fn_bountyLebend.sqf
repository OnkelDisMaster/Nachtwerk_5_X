#include "..\..\script_macros.hpp"
/*
    File: fn_bountyLebend.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/
private ["_spieler","_bountyZiel","_inArea","_zone1","_zone2","_zone3","_dis"];
_zone1 = getMarkerPos "Kopfgeld_1"; // MARKERS FOR SAFEZONE
_zone2 = getMarkerPos "Kopfgeld_2";
_zone3 = getMarkerPos "Kopfgeld_3";
_dis = 30; // DISTANCE SAFE ZONE (euren Marker Radius angeben) 

_bountyZiel = param [0,ObjNull,[ObjNull]];
_spieler = param [1,ObjNull,[ObjNull]];


if ((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis)) then 
	{
			[getPlayerUID _bountyZiel,_bountyZiel,_spieler,true,true] remoteExecCall ["life_fnc_amountBounty",RSERV];
			[getPlayerUID _bountyZiel] remoteExecCall ["life_fnc_bountyRemove",RSERV];					
	} else {
			[getPlayerUID _bountyZiel,_bountyZiel,_spieler,true] remoteExecCall ["life_fnc_amountBounty",RSERV];
			[getPlayerUID _bountyZiel] remoteExecCall ["life_fnc_bountyRemove",RSERV];
	};
	_bountyZiel setvariable ["hatKopfgeld",false,true];

hintSilent "Auf den Gefangenen gibt es zur Zeit kein Kopfgeld";
//Wenn gesucht dann direkt 5-10 min ins Gefängnis
