/*
    File: fn_wantedInfo.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pulls back information about the wanted criminal.
*/
private["_display","_list","_data","_criminalID","_active","_dataArr","_array","_crimes","_crimesArr","_mylist"];
disableSerialization;

_data = lbData[2401,(lbCurSel 2401)];
_display = findDisplay 2400;
_list = _display displayCtrl 2402;
_active= 1;

if (_active isEqualTo 1) exitWith{
    _crimesArr = [];
    _mylist = [];
    _dataArr = toArray(_data);
    _array = toString(_dataArr);
    _array = call compile format ["%1", _array];
    _type = _array select 2;


    _type = toArray(_type);
    for "_i" from 0 to (count _type)-1 do
    {
        _sel = _type select _i;
        if (_sel == 96) then
        {
            _type set[_i,39];
        };
    };
    _type = toString(_type);
    _type = call compile format ["%1", _type];

    {
        switch (_x) do
        {
            case "187V": {_x = "STR_Crime_187V"};
            case "187": {_x = "STR_Crime_187"};
            case "901": {_x = "STR_Crime_901"};
            case "215": {_x = "STR_Crime_215"};
            case "213": {_x = "STR_Crime_213"};
            case "211": {_x = "STR_Crime_211"};
            case "207": {_x = "STR_Crime_207"};
            case "207A": {_x = "STR_Crime_207A"};
            case "390": {_x = "STR_Crime_390"};
            case "487": {_x = "STR_Crime_487"};
            case "488": {_x = "STR_Crime_488"};
            case "480": {_x = "STR_Crime_480"};
            case "481": {_x = "STR_Crime_481"};
            case "482": {_x = "STR_Crime_482"};
            case "483": {_x = "STR_Crime_483"};
            case "459": {_x = "STR_Crime_459"};
            case "666": {_x = "STR_Crime_666"};
            case "667": {_x = "STR_Crime_667"};
            case "668": {_x = "STR_Crime_668"};
            case "919": {_x = "STR_Crime_919"};
            case "919A": {_x = "STR_Crime_919A"};

            case "1": {_x = "STR_Crime_1"};
            case "2": {_x = "STR_Crime_2"};
            case "3": {_x = "STR_Crime_3"};
            case "4": {_x = "STR_Crime_4"};
            case "5": {_x = "STR_Crime_5"};
            //case "6": {_x = "STR_Crime_6"};
            case "6": {_x = "Fahren ohne Helm"};
            case "7": {_x = "STR_Crime_7"};
            case "8": {_x = "STR_Crime_8"};
            //case "9": {_x = "STR_Crime_9"};
            case "9": {_x = "Schwerer Diebstahl (Zivilfahrzeug)"};
            case "10": {_x = "STR_Crime_10"};
            case "11": {_x = "STR_Crime_11"};
            case "12": {_x = "STR_Crime_12"};
            case "13": {_x = "STR_Crime_13"};
            case "14": {_x = "STR_Crime_14"};
            case "15": {_x = "STR_Crime_15"};
            case "16": {_x = "STR_Crime_16"};
            case "17": {_x = "STR_Crime_17"};
            case "18": {_x = "STR_Crime_18"};
            case "19": {_x = "STR_Crime_19"};
            case "20": {_x = "STR_Crime_20"};
            case "21": {_x = "STR_Crime_21"};
            case "22": {_x = "STR_Crime_22"};
            case "23": {_x = "STR_Crime_23"};
            case "24": {_x = "STR_Crime_24"};
            case "25": {_x = "STR_Crime_25"};
            case "2000": {_x = "STR_Crime_2000"};
        };
        _crimes pushBack _x;
    }forEach _type;
hint format["crimes: %1 \n %2",_crimes,_type];
    lbClear _list;

    {
        _crime = _x;
        if (!(_crime in _mylist)) then
        {
            _mylist pushBack _crime;
            _list lbAdd format[localize "STR_Wanted_Count",{_x == _crime} count _crimes,localize _crime];
        };
    } forEach _crimes;

    ctrlSetText[2403,format[localize "STR_Wanted_Bounty",[_array select 3] call life_fnc_numberText]];
};


if((lbCurSel 2401) == -1) then {
    [player] remoteExec ["life_fnc_wantedFetch",RSERV];
} else {
    _criminalID = _data select 1;
    [player,_criminalID] remoteExec ["life_fnc_wantedCrimes",RSERV];
};

