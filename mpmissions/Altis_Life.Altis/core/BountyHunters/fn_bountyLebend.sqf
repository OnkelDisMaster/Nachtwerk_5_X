#include "..\..\script_macros.hpp"
/*
    File: fn_bountyLebend.sqf
    Author: Valle

    Description:
	Bountyhunter gets payed if he delivers the target near a bh marker.
    
*/

if (life_HC_isActive) then {
        [getPlayerUID cursorTarget,cursorTarget,player] remoteExecCall ["HC_fnc_amountBounty",HC_Life];
		[(_data select 0),_Kopfgeld] remoteExecCall ["HC_fnc_bountyRemove",HC_Life];
} else {
        [getPlayerUID cursorTarget,cursorTarget,player] remoteExecCall ["life_fnc_amountBounty",RSERV];
		[(_data select 0),_Kopfgeld] remoteExecCall ["life_fnc_bountyRemove",RSERV];
};
hint "Du versuchst den Gefangenen ans Kopfgeldbüro zu überstellen";
//Wenn gesucht dann direkt 5-10 min ins Gefängnis
