/*
    File: fn_robATM.sqf
    Author: DerHeiligeBimBam und Chuck Norris
    
    Description:
	ATM / Geldautomat ausrauben
	Edit by Audacious
    
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos","_testserver","_robbed","_wait","_alarm"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; 
_action = [_this,2] call BIS_fnc_param;
_testserver = false;
_robbed = cursorObject;

_wait = round(random(2));
sleep _wait;


if (isNil "life_Event") then {life_Event = false; publicVariable "life_Event";};
if (life_Event) exitWith {titleText ["***Momentan findet ein Event statt, \n Aktionen dieser Art sind momentan nicht gestattet!***","PLAIN"];};

if (isNil "life_Raub") then {life_Raub = false; publicVariable "life_Raub";};
if (life_Raub) exitWith {titleText ["***Momentan findet bereits ein aktiver Raub statt, \n Versuche es später nocheinmal!***","PLAIN"];};


if (isNil {_robbed getVariable "atm_robbed"}) then {_robbed setVariable["atm_robbed",false,true];};

if (isNil "log_atm_rob") then {log_atm_rob = 0; publicVariable "log_atm_rob";};
if (isNil "atm_rob") then {atm_rob = []; publicVariable "atm_rob";};

//if(playersNumber west < 2) exitWith {hint "Es muessen min. 2 Polizisten Online sein!"}; 

if (vehicle player != _robber) exitWith { hint "Aus einem Fahrzeug ausrauben? Wird bisschen schwer!" ;};
if(side _robber != civilian) exitWith { hint "Du bist kein Zivilist!" };
if(_robber distance _shop > 2) exitWith { hint "Du musst neben den Geldautomat stehen!" };

if (vehicle player != _robber) exitWith { hint "Steig aus deinem Fahrzeug aus!" };

if(_robbed getVariable "atm_robbed") exitWith { hint "Dieser Automat ist bereits aufgebrochen!" };
 
if !(alive _robber) exitWith {};
if(!([false,"boltcutter",1] call life_fnc_handleInv)) exitWith { hint "Du brauchst einen Bolzenschneider!"};

life_Raub = true;
publicVariable "life_Raub";
_rip = true;
_kassa = 5000 + round(random 8000);
_shop removeAction _action;
//_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = floor (random 100);

if (!isNil "life_alarm") then {
 deleteMarker life_alarm;
};

if (log_atm_rob >= 4) then { _kassa = 50 + round(random 100); 
    [1,format["*** Ein leerer Geldautomat wird aufgebrochen in %1. ***", _shop]]    remoteExecCall ["life_fnc_broadcast",west];
    _chance = 35;  };

if(_chance >= 25) then { hint "Die Polizei wurde benachrichtig!"; [1,format["Ein Geldautomat wird aufgebrochen!", _shop]] remoteExecCall ["life_fnc_broadcast",west];

[getPlayerUID _robber,name _robber,"213"] remoteExec ["life_fnc_wantedAdd"];
};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Entferne dich weiter weg als 2m. (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;
 
if(_rip) then
{
_robbed setVariable["atm_robbed",true,true];
atm_rob = atm_rob +[_robbed];
publicVariable "atm_rob";

/*
//_Pos = position player; 
_marker = createMarker ["Marker200", position player]; 
"Marker200" setMarkerColor "ColorRed";
"Marker200" setMarkerText "Achtung! Achtung!";
"Marker200" setMarkerType "mil_warning";
*/
    life_alarm = str _chance;
    createMarker [life_alarm, position player]; 
    life_alarm setMarkerColor "ColorRed";
    life_alarm setMarkerText "Alarm! ATM!";
    life_alarm setMarkerType "mil_warning";

while{true} do
{
    sleep 1;
    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format["Wird ausgraubt. Entferne dich nicht weiter als 2m. (%1%2)...",round(_cP * 100),"%"];
     
    if(_cP >= 1) exitWith {deleteMarker life_alarm; life_Raub = false;};
    if(_robber distance _shop > 2.5) exitWith {deleteMarker life_alarm; life_Raub = false;};
    if!(alive _robber) exitWith {deleteMarker life_alarm; life_Raub = false;};
};

if!(alive _robber) exitWith { _rip = false; life_Raub = false; deleteMarker life_alarm;};

if(_robber distance _shop > 2.5) exitWith { _shop switchMove ""; hint "Du hast dich zuweit entfernt."; 5 cutText ["","PLAIN"]; 
_rip = false; 
life_Raub = false;
sleep (30 + random(180));
deleteMarker life_alarm;};

5 cutText ["","PLAIN"];
 
titleText[format["Du hast $%1 gestohlen!",[_kassa] call life_fnc_numberText],"PLAIN"];
 
life_cash = life_cash + _kassa;

log_atm_rob = log_atm_rob + 1;
publicVariable "log_atm_rob";

life_Raub = false; 
_rip = false;

if(_chance <= 50) then { 
    hint "Du hast die Farbpatrone ausloest! Du wurdest gesehen und erkannt vom Sicherheitspersonal via Videokamera!"; 
    titleCut [" ","white in",1];    
    [player,"SmallExplosion"] call life_fnc_globalSound;
    player setObjectTextureGlobal [0,"#(argb,8,8,3)color(0.69,0.98,0.2,1,co)"];
    player setObjectTextureGlobal [1,"#(argb,8,8,3)color(0.69,0.98,0.2,1,co)"];
    player setObjectTextureGlobal [2,"#(argb,8,8,3)color(0.69,0.98,0.2,1,co)"];
    [1,format["Die Farbpatrone wurde ausgeloest, der Taeter ist nun hell gruen! ATM: Taeter laut Sicherheitsdienst ist %1!",name _robber, _shop]]    remoteExecCall ["life_fnc_broadcast",west];
    [getPlayerUID _robber,name _robber,"2000"] remoteExec ["life_fnc_wantedAdd"];
	deleteMarker life_alarm;
    };

life_use_atm = false;
sleep (30 + random(180));
deleteMarker life_alarm;
life_use_atm = true;
call life_fnc_isLife;
if!(alive _robber) exitWith {};
};
life_Raub = false; publicVariable "life_Raub";
sleep 300;
_action = _shop addAction["Geldautomat aufbrechen",life_fnc_robATM]; 
//_shop switchMove "";