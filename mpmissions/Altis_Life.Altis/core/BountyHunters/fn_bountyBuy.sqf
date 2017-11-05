#include "..\..\script_macros.hpp"
/*
	File: fn_bountyBuy.sqf
	Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 
	
	Description: Creates a GUI message when someone wants to buy the bounty hunting license.
*/

private ["_aciton","_unit","_atm"];

_unit = player;

if(playerSide != civilian) exitWith {hint "Nur Zivilisten können eine Kopfgeldjäger Lizenz erwerben!"};
if(life_cash < 16000000) exitWith {hint "Du hast keine $16,000,000 für eine Kopfgeldjäger Lizenz!"};
if(license_civ_bountyH) exitWith {hint "Du bist bereits ein Kopfgeldjäger, warum solltest du dir die Lizenz erneut holen?"};

_action = [
    format [localize "STR_GNOTF_BountyMSG"],
    localize "STR_Bounty_License",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
	hint parseText format["<t color='#FA4F4F'><t size='1.5'>Willkommen bei den Kopfgeldjägern!</t></t><br/><br/><t size='1.2'>Die Kopfgeldjäger sind eine Gruppe von Zivilisten, welche Altis zu einem besseren Platz machen wollen, indem sie Flüchtige Straftäter lebendig oder tot zur Strecke bringen und dafür hohe Geldsummen kassieren.
	Als Kopfgeldjäger musst du dich dennoch an das Serverregelwerk und die RP Pflicht halten.<br/><br/> Jeglicher Regelverstoß, wie RDM wird bestraft!</t>"];
	life_cash = life_cash - 16000000;
	[100] remoteExecCall ["life_fnc_removeLicenses",_unit];
	player setvariable ["isBountyH",true,true];
} else {
	hint "Also ist der Kopfgeldjäger Job nichts für dich, dann raus aus meinem Haus!";
};
