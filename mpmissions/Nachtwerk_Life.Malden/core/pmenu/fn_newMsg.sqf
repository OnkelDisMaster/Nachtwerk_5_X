#include "..\..\script_macros.hpp"
/*
	
	file: fn_newMsg.sqf
	Author: Silex
	
*/

private["_to","_type","_playerData","_msg"];
disableSerialization;

_type = [_this,0,-1] call BIS_fnc_param;
_playerData = [_this,1,-1] call BIS_fnc_param;
_msg = [_this,2,"",[""]] call BIS_fnc_param;

_display = findDisplay 88888;
_cPlayerList = _display displayCtrl 88881;
_cMessageEdit = _display displayCtrl 88884;

switch(_type) do
{
	case 0:
	{
		life_smartphoneTarget = call compile format["%1",_playerData];
		ctrlSetText[88886, format["Nachricht an: %1",name life_smartphoneTarget]];
		if((__GETC__(life_adminlevel) < 1)) then
		{
			ctrlShow[888897,false];
		};
	};
	//normal message
	case 1:
	{
		if(isNUll life_smartphoneTarget) exitWith {hintSilent format["Keine Person ausgwaehlt!"];};
		ctrlShow[88885, false];
		if(_msg == "") exitWith {hintSilent "You must enter a message to send!";ctrlShow[88885, true];};
		//[[life_smartphoneTarget,_msg,player,0],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[life_smartphoneTarget,_msg,player,0] remoteExec ["TON_fnc_handleMessages"];
		hintSilent format["You sent %1 a message: %2",name life_smartphoneTarget,_msg];	
		ctrlShow[88885, true];
		closeDialog 88883;
	};
	//copmessage
	case 2:
	{
		if(({side _x == west} count playableUnits) == 0) exitWith {hintSilent format["Die Polizei ist derzeit nicht zu erreichen. Bitte versuchen Sie es spaeter nochmal."];};
		ctrlShow[888895,false];
		if(_msg == "") exitWith {hintSilent "You must enter a message to send!";ctrlShow[888895,true];};
		//[[ObjNull,_msg,player,1],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[ObjNull,_msg,player,1] remoteExec ["TON_fnc_handleMessages"];
		_to = "The Police";
		hintSilent format["You sent %1 a message: %2",_to,_msg];
		ctrlShow[888895,true];
		closeDialog 887890;
	};
	//msgadmin
	case 3:
	{
		ctrlShow[888896,false];
		if(_msg == "") exitWith {hintSilent "You must enter a message to send!";ctrlShow[888896,true];};
		//[[ObjNull,_msg,player,2],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[ObjNull,_msg,player,2] remoteExec ["TON_fnc_handleMessages"];
		_to = "The Admins";
		hintSilent format["You sent %1 a message: %2",_to,_msg];
		ctrlShow[888896,true];
		closeDialog 887890;
	};
	//emsrequest
	case 4:
	{
		if(({side _x == independent} count playableUnits) == 0) exitWith {hintSilent format["Zurzeit ist kein Arzt im Dienst. Bitte probiere es spaeter nochmal."];};
		ctrlShow[888899,false];
		if(_msg == "") exitWith {hintSilent "You must enter a message to send!";ctrlShow[888899,true];};
		//[[ObjNull,_msg,player,3],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[ObjNull,_msg,player,3] remoteExec ["TON_fnc_handleMessages"];
		hintSilent format["You have sent a message to all EMS Units.",_msg];
		ctrlShow[888899,true];
		closeDialog 887890;
	};
	//adminToPerson
	case 5:
	{
		if((call life_adminlevel) < 1) exitWith {hintSilent "You are not an admin!";};
		if(isNULL life_smartphoneTarget) exitWith {hintSilent format["Keine Person ausgwaehlt!"];};
		if(_msg == "") exitWith {hintSilent "You must enter a message to send!";};
		//[[life_smartphoneTarget,_msg,player,4],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[life_smartphoneTarget,_msg,player,4] remoteExec ["TON_fnc_handleMessages"];
		hintSilent format["Admin Message Sent To: %1 - Message: %2",name life_smartphoneTarget,_msg];
		closeDialog 88883;
	};
	//emergencyloading
	case 6:
	{
        if ((side player) isEqualTo west || (side player) isEqualTo independent) then {
            ctrlShow[888898,true];
            ctrlShow[888900,true];
            ctrlShow[888896,false];
        } else {
            ctrlShow[888898,false];
            ctrlShow[888900,false];
        	ctrlShow[888896,true];
        };
		/*if((__GETC__(life_adminlevel) < 1)) then
		{
			ctrlShow[888898,false];
			ctrlShow[888896,true];
		} else {
		    if ((side _x) isEqualTo west) then {
                ctrlShow[888898,true];
                ctrlShow[888896,false];
		    };
		};*/
	};
	//adminMsgAll
	case 7:
	{
		//if((call life_adminlevel) < 1) exitWith {hintSilent "You are not an admin!";};
		if(_msg == "") exitWith {hintSilent "Bitte ein Text eingeben!";};
		//[[ObjNull,_msg,player,5],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[ObjNull,_msg,player,5] remoteExec ["TON_fnc_handleMessages"];
		hintSilent format["Rundfunknachricht wurde gesendet: %1",_msg];
		closeDialog 887890;
	};
	//adacrequest
	case 8:
	{
		if(({side _x == independent} count playableUnits) == 0) exitWith {hintSilent format["Zurzeit ist kein ADAC im Dienst. Bitte probiere es spaeter nochmal."];};
		ctrlShow[888900,false];
		if(_msg == "") exitWith {hintSilent "You must enter a message to send!";ctrlShow[888900,true];};
		//[[ObjNull,_msg,player,6],"TON_fnc_handleMessages",false] spawn life_fnc_MP;
		[ObjNull,_msg,player,6] remoteExec ["TON_fnc_handleMessages"];
		hintSilent format["Notruf wurde abgesetzt.",_msg];
		ctrlShow[888900,true];
		closeDialog 887890;
	};
};