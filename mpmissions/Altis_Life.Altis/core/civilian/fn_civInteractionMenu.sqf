#include "..\..\script_macros.hpp"
/*
    File: fn_civInteractionMenu.sqf (fn_copInteractionMenu.sqf)
    Author: Bryan "Tonic" Boardwine
		Edited by Felix von Studinske
    Description:
    Replaces the mass addactions for various cop actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Title 37401
private ["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","i","_spawn_array"];
disableSerialization;
_curTarget = param [0,objNull,[objNull]];
if (isNull _curTarget) then {if (!isNull cursorTarget) then {_curTarget = cursorTarget;} else {if(!isNull cursorObject) then {_curTarget = cursorObject;} else {_curTarget = objNull;};};};
if (isNull _curTarget) exitWith {hint "Kein Ziel im Visier";};
if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; //Bad side check?
    if (player distance _curTarget > 4 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};
if (!dialog) then {
    createDialog "pInteraction_Menu";
};
_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;
life_pInact_curTarget = _curTarget;

//Set Robber Button
_Btn1 ctrlSetText "Ausrauben";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_robAction; closeDialog 0;";

if (player getVariable ["isEscorting",false]) exitWith {
	_Btn2 ctrlShow true;
	_Btn2 ctrlSetText localize "STR_pInAct_StopEscort";
	_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_stopEscorting; closeDialog 0;";
	_Btn3 ctrlSetText localize "STR_pInAct_PutInCar";
	_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";
	{ _x ctrlShow false; } forEach [_Btn3,_Btn4,_Btn5,_Btn6,_Btn7,_Btn8];
};

if (_curTarget getVariable ["restrained",false]) then {
	//Set Unrestrain Button
	_Btn2 ctrlSetText localize "STR_pInAct_Unrestrain";
	_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";
	if !(player getVariable ["isEscorting",false]) then {
		_Btn3 ctrlSetText localize "STR_pInAct_Escort";
		_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
	};
	_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
	_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";

	_Btn5 ctrlSetText "Kopfgeld einfordern";
	_Btn5 buttonSetAction "[life_pInact_curTarget,player] call life_fnc_bountyLebend; closeDialog 0;";
	
	if (license_civ_bountyH) then {
		if (((getMarkerPos "cop_spawn_1") distance player > 80) && ((getMarkerPos "cop_spawn_2") distance player > 80) && ((getMarkerPos "cop_spawn_3") distance player) > 80 && ((getMarkerPos "cop_spawn_4") distance player > 80) && ((getMarkerPos "cop_spawn_5") distance player > 80) && ((getMarkerPos "cop_spawn_6") distance player > 80) && ((getMarkerPos "Kopfgeld_1") distance player > 80) && ((getMarkerPos "Kopfgeld_2") distance player > 80) && ((getMarkerPos "Kopfgeld_3") distance player > 80)) then {
			_Btn5 ctrlEnable false;
		};	
	} else {_Btn5 ctrlShow false;};
		
	{ _x ctrlShow false; } forEach [_Btn6,_Btn7,_Btn8,_Btn9,_Btn10];
} else {
	closeDialog 0;
	hint "Es sind noch keine weiteren Funktionen im fn_civInteractionMenu.sqf verfügbar";
	titleText ["Es sind noch keine weiteren Funktionen im fn_civInteractionMenu.sqf verfügbar","PLAIN"];
};