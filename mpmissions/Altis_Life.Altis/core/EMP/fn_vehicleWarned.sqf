/*
    File: vehicleWarned.sqf
    Author: � 2014 nano2K - written for we-are-friendly.de
*/
private["_vehicle"];
_vehicle =  [_this,0,[],[]] call BIS_fnc_param;
hint "ICH BIN EIN TEST! vehicleWarned 1";
uiSleep 3.35;
if(isNull _vehicle) exitWith {};
hint "ICH BIN EIN TEST! vehicleWarned 2";
uiSleep 3.35;
if((_vehicle getVariable ["nano_warned", false])) exitWith {};
hint "ICH BIN EIN TEST! vehicleWarned 3";
uiSleep 3.35;
_vehicle setVariable["nano_warned",true,true];
hint "Sie werden gerade EMP gewarnt!!\n Bleiben Sie Sofort stehen!!";
_vehicle say3D "empwarn";
uiSleep 3.35;
hint "Sie werden gerade EMP gewarnt!!\n Bleiben Sie Sofort stehen!!";
_vehicle say3D "empwarn";
uiSleep 3.35;
hint "Sie werden gerade EMP gewarnt!!\n Bleiben Sie Sofort stehen!!";
_vehicle say3D "empwarn";
uiSleep 3.35;
hint "Sie werden gerade EMP gewarnt!!\n Bleiben Sie Sofort stehen!!";
_vehicle setVariable["nano_warned",false,true];