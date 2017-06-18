#include "..\..\script_macros.hpp"
/*
    File: fn_wantedGrab.sqf
    Author: ColinM

    Description:
    Prepare the array to query the crimes.
*/
private["_display","_tab","_criminal","_mylist"];
disableSerialization;
_display = findDisplay 2400;
_tab = _display displayCtrl 2402;
_criminal = [_this,0,[],[[]]] call BIS_fnc_param;
_criminalID = getPlayerUID _criminal;
_mylist = [];
_crimes = _data select 0;
hint "Daten werden geladen";
lbClear _tab;
{
    _crime = _x;
    if (!(_crime in _mylist)) then
    {
        _mylist pushBack _crime;
        _tab lbAdd format[localize "STR_Wanted_Count",{_x == _crime} count _crimes,localize _crime];
    };
} forEach _crimes;

ctrlSetText[2403,format[localize "STR_Wanted_Bounty",[(_data select 1)] call life_fnc_numberText]];