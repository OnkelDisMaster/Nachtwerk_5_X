/*
 Medic-Interaktions Menü von Team-Wings aka Pius
*/

//Wenn man mehr als 4m entfernt vom Spieler ist gehts nicht!
if(player distance cursorTarget > 4) exitWith {};

#define Btn1 37458
#define Btn2 37459
#define Btn3 37461
#define Title 37401

private["_display","_unit","_curTarget","_Btn1","_Btn2","_Btn3"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _curTarget) exitWith {closeDialog 0;};

if(!isPlayer _curTarget && side _curTarget == independent) exitWith {closeDialog 0;};

_display = findDisplay 37400;

if(!dialog) then {
 createDialog "pInteraction_Menu";
};

_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;

life_pInact_curTarget = _unit;

_Btn1 ctrlEnable true;
_Btn1 ctrlSetText localize "STR_pInAct_TicketBtn";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";
_Btn1 ctrlShow true;

_Btn2 ctrlEnable true;
_Btn2 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";
_Btn2 ctrlShow true;

_Btn3 ctrlEnable true;
_Btn3 ctrlSetText localize "STR_pInAct_Breathalyzer";
_Btn3 buttonSetAction "[player] remoteExec [""life_fnc_alkoholdrugtester"",life_pInact_curTarget];closeDialog 0;";
_Btn3 ctrlShow true;
