#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Guts the animal?
*/
private["_animalCorpse","_upp","_ui","_progress","_pgText","_cP","_displayName","_item"];
_animalCorpse = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _animalCorpse) exitWith {}; //Object passed is null?

life_interrupted = false;
if(!((typeOf _animalCorpse) in ["Hen_random_F","Cock_random_F","Goat_random_F","Sheep_random_F","Rabbit_F"])) exitWith {};
if(player distance _animalCorpse > 3.5) exitWith {};
life_action_inUse = true;
 switch(typeOf _animalCorpse) do {
	case "Hen_random_F": {_displayName = "Chicken"; _item = "hen_raw";};
	case "Cock_random_F": {_displayName = "Rooster"; _item = "rooster_raw";};
	case "Goat_random_F": {_displayName = "Goat"; _item = "goat_raw";};
	case "Sheep_random_F": {_displayName = "Sheep"; _item = "sheep_raw";};
	case "Rabbit_F": {_displayName = "Rabbit"; _item = "rabbit_raw";};
	default {_displayName = ""; _item = "";};
};

if(EQUAL(_displayName,"")) exitWith {life_action_inUse = false;};

_upp = format["Gutting %1",_displayName];
//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[[player,"AinvPknlMstpSnonWnonDnon_medic_1",true],"life_fnc_animSync",true,false] call life_fnc_MP;
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	uiSleep 0.15;
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(isNull _animalCorpse) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
};

life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(isNull _animalCorpse) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(player != vehicle player) exitWith {titleText[localize "STR_NOTF_RepairingInVehicle","PLAIN"];};

if(([true,_item,1] call life_fnc_handleInv)) then {
	deleteVehicle _animalCorpse;
	titleText [format["Du hast %1 rohes Fleisch gesammelt",_displayName],"PLAIN"];
} else {
	titleText ["Dein Inventar ist voll","PLAIN"];
};
