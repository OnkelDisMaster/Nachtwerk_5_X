private["_unit","_amount"];

ctrlShow[2001,false];
if((lbCurSel 9902) == -1) exitWith {hintSilent "Niemand wurde ausgewaehlt!";ctrlShow[2001,true];};
_unit = lbData [9902,lbCurSel 9902];
_unit = call compile format["%1",_unit];
_amount = lbData [9991,lbCurSel 9991];
if(isNil "_unit") exitWith {ctrlShow[2001,true];};
//if(_unit == player) exitWith {ctrlShow[2001,true];};
if(isNull _unit) exitWith {ctrlShow[2001,true];};

//[[1,format["The police is searching for %1",name _unit,_amount,getPlayerUID _unit]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;
[1,format["The police is searching for %1",name _unit,_amount,getPlayerUID _unit]] remoteExec ["life_fnc_broadcast",west,false];

//[[getPlayerUID _unit,name _unit,_amount],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
[getPlayerUID _unit,name _unit,_amount] remoteExec ["life_fnc_wantedAdd"];