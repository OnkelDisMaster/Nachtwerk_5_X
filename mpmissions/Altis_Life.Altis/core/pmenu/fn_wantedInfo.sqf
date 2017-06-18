/*
    File: fn_wantedInfo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls back information about the wanted criminal.
*/
private["_display","_list","_crimes","_bounty","_mylist","_data","_crimesArr","_criminalID"];
disableSerialization;

//if((lbCurSel 2406) == -1) exitWith {hintSilent "Niemand wurde ausgewaehlt!";};

//_data = [_this,0,[],[[]]] call BIS_fnc_param;
_data = lbData[2401,(lbCurSel 2401)];

_display = findDisplay 2400;
_list = _display displayCtrl 2402;
_mylist = 1;
_crimesArr = [];


if((lbCurSel 2401) == -1) then {
    [player] remoteExec ["life_fnc_wantedFetch",RSERV];
} else {
    if (_mylist isEqualTo 1) then {
        _mylist = 0;
        _criminalID = getPlayerUID _data;
        [player,_criminalID] remoteExec ["life_fnc_wantedCrimes",RSERV];
    } else {
        _data = [_this,0,[],[[]]] call BIS_fnc_param;
        lbClear _list;

        _crimes = _data select 0;

        {
            _crime = _x;
            if (!(_crime in _crimesArr)) then
            {
                _crimesArr pushBack _crime;
                _list lbAdd format[localize "STR_Wanted_Count",{_x == _crime} count _crimes,localize _crime];
            };
        } forEach _crimes;

        ctrlSetText[2403,format[localize "STR_Wanted_Bounty",[(_data select 1)] call life_fnc_numberText]];
        _mylist = 1;
    };
};




//_data = call compile format["%1", _data];
//if (_active isEqualTo 1) exitWith {hint format["_data: %1 \n _owner: %2",_data,_owner];};

/*
if (isNil "_data") exitWith {hint localize "STR_Cop_wantedList_FailedToFetch";};
if (!(_data isEqualType [])) exitWith {hint localize "STR_Cop_wantedList_FailedToFetch";};
if (_data isEqualTo []) exitWith {hint localize "STR_Cop_wantedList_FailedToFetch";};


lbClear _list;

_crimes = _data select 0;

{
    _crime = _x;
    if (!(_crime in _mylist)) then
    {
        _mylist pushBack _crime;
        _list lbAdd format[localize "STR_Wanted_Count",{_x == _crime} count _crimes,localize _crime];
    };
} forEach _crimes;

ctrlSetText[2403,format[localize "STR_Wanted_Bounty",[(_data select 1)] call life_fnc_numberText]];*/
