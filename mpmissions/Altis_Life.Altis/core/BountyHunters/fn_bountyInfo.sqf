/*
    File: fn_bountyInfo.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 

    Description:
    Pulls back information about the person with the bounty. 
*/
disableSerialization;

private _data = param [0,[],[[]]];
private _display = findDisplay 9700;
private _list = _display displayCtrl 9720;
private _mylist = [];

if (isNil "_data") exitWith {hint localize "STR_Cop_wantedList_FailedToFetch";};
if !(_data isEqualType []) exitWith {hint localize "STR_Cop_wantedList_FailedToFetch";};
if (_data isEqualTo []) exitWith {hint localize "STR_Cop_wantedList_FailedToFetch";};

lbClear _list;

ctrlSetText[9730,format [localize "STR_Wanted_Bounty",[(_data select 0)] call life_fnc_numberText]];
tempKopfgeld = (_data select 0);