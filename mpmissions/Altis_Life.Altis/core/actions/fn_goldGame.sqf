#include "..\..\script_macros.hpp"
/*
    File: GoldGame.sqf
    Author: Valle

    Description:
	Pay Money to get a chance to win goldbars
    
*/

private["_ui","_progress","_pgText","_cP","_chance","_belohnung","_maxAnz","_GoldGameAnz","_newAnz"];

disableSerialization; //Disable Serialization
if (life_is_processing) exitWith {
    closeDialog 2001;
    closeDialog 0;
};

if !(license_civ_goldGame) exitWith {hint "Du besitzt die Goldfälscher Lizenz nicht!";};

if (life_cash < 1000000) exitWith {hint "Du hast keine 1.000.000$ auf der Hand dabei!";};  
life_cash = life_cash - 1000000;

5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Bleibe innerhalb von (10m)um Goldbarren zu fälschen  (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0;
 
while{_cP < 1} do
{
	uiSleep 0.6;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["Bleibe innerhalb von (10m)um Goldbarren zu fälschen (%1%2)...",round(_cP * 100),"%"];

	if(_cP > 1) exitWith {};
	if(player distance (getMarkerPos "goldgame") > 10.5) exitWith {hint "Du hast dich zu weit entfernt!";};
};
if!(alive player) exitWith {};
if(_robber distance _shop > 10.5) exitWith {hint "Du hast dich zu weit entfernt!"; 5 cutText ["","PLAIN"];};
5 cutText ["","PLAIN"];

_belohnung = 0;
_chance = random (101);

if (_chance < 4) then {_belohnung = 3;} else {
	if (_chance < 10) then {_belohnung = 2;} else {
		if (_chance < 31) then {_belohnung = 1;} else {
			if (_chance < 101) then {_belohnung = 0;};
		};
	};
};
_maxAnz = 10;
_GoldGameAnz = player getVariable ["GoldGameAnz",-1];
if (_GoldGameAnz isEqualTo -1) then {if ((round(BANK/30000)+3) > _maxAnz) then {player setVariable ["GoldGameAnz",_maxAnz];} else {player setVariable ["GoldGameAnz",(round(BANK/30000)+3)];};};
if (_GoldGameAnz isEqualTo 0) then {_belohnung = 0;} else {
	if (_belohnung > 0) then {
		_newAnz = _GoldGameAnz - _belohnung; 
		if (_newAnz < 0) then {_newAnz = 0};
		player setVariable ["GoldGameAnz",_newAnz];
		if ([true,"goldBar",_belohnung] call life_fnc_handleInv) then {titleText[format["Du hast %1 Goldbarren erfolgreich gefälscht",_belohnung],"PLAIN"];} else {titleText[format["Du hast hattest keinen Platz mehr und dafür %1$ bekommen",([(_belohnung * 500000)] call life_fnc_numberText)],"PLAIN"]; life_cash = life_cash + _belohnung * 500000;};
	};
};	

if (_belohnung isEqualTo 0) then {titleText["Deine Gold Plagiate sind aufgeflogen","PLAIN"];}; //Wantedlisteneintrag dazu

