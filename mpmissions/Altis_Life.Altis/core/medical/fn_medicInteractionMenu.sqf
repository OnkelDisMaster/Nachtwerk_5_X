#include "..\..\script_macros.hpp"
/*
    File: fn_medicInteractionMenu.sqf
    Author: Bryan "Tonic" Boardwine
    
    Description:
    Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Title 37401

private ["_display","_curTarget","_seizeRank","_Btn1","_Btn2","_Btn3"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];

    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (player distance _curTarget > 7 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn2];
};
if ((_curObject getVariable ["restrained",false])) then {
    //Set Unrestrain Button
    _Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
    _Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";
    
    //Set Escort Button
    if (player getVariable ["isEscorting",false]) then {
        _Btn2 ctrlSetText localize "STR_pInAct_StopEscort";
        _Btn2 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
    } else {
        _Btn2 ctrlSetText localize "STR_pInAct_Escort";
        _Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
    };
} else {{ _x ctrlShow false; } forEach [_Btn1,_Btn2];};

//Set Ticket Button
_Btn3 ctrlSetText localize "STR_pInAct_TicketBtn";
_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";
