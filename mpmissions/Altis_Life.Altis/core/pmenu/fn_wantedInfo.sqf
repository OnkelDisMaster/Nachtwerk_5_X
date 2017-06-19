/*
    File: fn_wantedInfo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls back information about the wanted criminal.
*/
private["_display","_list","_data","_criminalID","_active"];
disableSerialization;

_data = lbData[2401,(lbCurSel 2401)];
_display = findDisplay 2400;
_list = _display displayCtrl 2402;
_active= 1;

if (_active isEqualTo 1) exitWith{
    hint format["data: %1",_data select 3];
    ctrlSetText[2403,format[localize "STR_Wanted_Bounty",[_data select 3] call life_fnc_numberText]];
};


if((lbCurSel 2401) == -1) then {
    [player] remoteExec ["life_fnc_wantedFetch",RSERV];
} else {
    _criminalID = _data select 1;
    [player,_criminalID] remoteExec ["life_fnc_wantedCrimes",RSERV];
};

