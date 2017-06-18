/*
    File: fn_wantedInfo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls back information about the wanted criminal.
*/
private["_display","_list","_data","_criminalID"];
disableSerialization;

_data = lbData[2401,(lbCurSel 2401)];
_display = findDisplay 2400;
_list = _display displayCtrl 2402;

if((lbCurSel 2401) == -1) then {
    [player] remoteExec ["life_fnc_wantedFetch",RSERV];
} else {
    _criminalID = getPlayerUID _data;
    [player,_criminalID] remoteExec ["life_fnc_wantedCrimes",RSERV];
};

