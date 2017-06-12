/*
	File: vehicleEmpd.sqf
	Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_vehicle","_aktiv"];
_aktiv = true;
_vehicle =  [_this,0,Objnull,[Objnull]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {};

if((_vehicle getVariable ["nano_empd", false])) exitWith {};
_vehicle setVariable["nano_empd",true,true];

if(_vehicle isKindOf "Car") then {
	hint "Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
	_vehicle say3D "empwarn";
    sleep 10;
    hint "Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
    _vehicle say3D "empwarn";
    uiSleep 10;
    hint "Sie werden gerade EMP!!\n Fahren Sie sofort Rechts an die Seite!!";
    _vehicle say3D "empwarn";
    uiSleep 10;

    _vehicle setHitPointDamage ["HitEngine", 1];
    _vehicle setHitPointDamage ["HitEngine2", 1];
    _vehicle setHitPointDamage ["HitEngine3", 1];
    hint "Sie werden gerade EMP!!\n Fahrzeug ist für 30 Sekunden deaktiviert!";
    _vehicle say3D "empwarn";
	sleep 30;
    _vehicle setHitPointDamage ["HitEngine", 0];
    _vehicle setHitPointDamage ["HitEngine2", 0];
    _vehicle setHitPointDamage ["HitEngine3", 0];

};

if(_vehicle isKindOf "Air") then {
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 10;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 10;
	hint"Sie werden gerade EMP!!\n Landen Sie Sofort!!";
	_vehicle say3D "empwarn";
	uiSleep 10;

    _vehicle setHitPointDamage ["HitEngine", 1];
    _vehicle setHitPointDamage ["HitEngine2", 1];
    _vehicle setHitPointDamage ["HitEngine3", 1];
    hint "Sie werden gerade EMP!!\n Fahrzeug ist für 30 Sekunden deaktiviert!";
    _vehicle say3D "empwarn";
	sleep 30;
    _vehicle setHitPointDamage ["HitEngine", 0];
    _vehicle setHitPointDamage ["HitEngine2", 0];
    _vehicle setHitPointDamage ["HitEngine3", 0];
};
if(_vehicle isKindOf "Ship") then {
	hint"Sie werden gerade EMP!!\n Bleiben Sie Sofort stehen!!";
	_vehicle say3D "empwarn";
	uiSleep 10;
	hint"Sie werden gerade EMP!!\n Bleiben Sie Sofort stehen!!";
    _vehicle say3D "empwarn";
    uiSleep 10;
    hint"Sie werden gerade EMP!!\n Bleiben Sie Sofort stehen!!";
    _vehicle say3D "empwarn";
    uiSleep 10;

    _vehicle setHitPointDamage ["HitEngine", 1];
    _vehicle setHitPointDamage ["HitEngine2", 1];
    _vehicle setHitPointDamage ["HitEngine3", 1];
    hint "Sie werden gerade EMP!!\n Fahrzeug ist für 30 Sekunden deaktiviert!";
    _vehicle say3D "empwarn";
	sleep 30;
    _vehicle setHitPointDamage ["HitEngine", 0];
    _vehicle setHitPointDamage ["HitEngine2", 0];
    _vehicle setHitPointDamage ["HitEngine3", 0];
};
_vehicle setVariable["nano_empd",false,true];