/*file:fn_alkoholdrugtester
author:[midgetgrimm]
edited by AmaZiinG and nic_noc
*/
private["_medic","_drinky","_drugy"];
_medic = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _cop) exitWith {};

_drinky = life_drink;
_drugy = life_drug;

// Beide positiv
if (_drinky > 0.4 && _drugy > 0) then {
    [1,format["Alkoholtest %1 \n\n Promille: %2 \n\n Nicht im legalen Bereich! \n\n Drogentest \n\n Ergebnis: Positiv \n\n Der Spieler steht unter Drogeneinfluss! ",name player,[_drinky] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",_cop];
};

//Alkohol positiv
if (_drinky > 0.4 && _drugy == 0) then {
[1,format["Alkoholtest %1 \n\n Promille: %2 \n\n Nicht im legalen Bereich! \n\n Drogentest \n\n Ergebnis: Negativ \n\n Der Spieler ist clean! ",name player,[_drinky] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",_cop];
};

//Drogen positiv
if (_drinky < 0.4 && _drugy > 0) then {
[1,format["Alkoholtest %1 \n\n Promille: %2 \n\n Im legalen Bereich! \n\n Drogentest \n\n Ergebnis: Positiv \n\n Der Spieler steht unter Drogeneinfluss! ",name player,[_drinky] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",_cop];
};

//Beide negativ
if (_drinky < 0.4 && _drugy == 0) then {
[1,format["Alkoholtest %1 \n\n Promille: %2 \n\n Im legalen Bereich! \n\n Drogentest \n\n Ergebnis: Negativ \n\n Der Spieler ist clean! ",name player,[_drinky] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",_cop];
};





/*

//Den Wert > 0.4 kann man natuerlich aendern
if(_drinky > 0.4) then {
    [1,format["Alkoholtest %1 \n\n Promille: %2 \n\n Nicht im legalen Bereich! ",name player,[_drinky] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",_cop];
} else {
    [1,format["Alkoholtest %1 \n\n Promille: %2 \n\n Im legalen Bereich! ",name player,[_drinky] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",_cop];
};

//Beide Tests werden nacheinander (5 Sekunden unterschied) angezeigt - man testet also quasi beides in einem

sleep 5;

//Wenn > 0 dann hat der Spieler irgendwas genommen - also ist es dann ein positives Ergebnis
if(_drugy > 0) then {
    [1,format["Drogentest %1 \n\n Ergebnis: Positiv \n\n Der Spieler steht unter Drogeneinfluss! ",name player]] remoteExec ["life_fnc_broadcast",_cop];
} else {
    [1,format["Drogentest %1 \n\n Ergebnis: Negativ \n\n Der Spieler ist clean! ",name player]] remoteExec ["life_fnc_broadcast",_cop];
};*/