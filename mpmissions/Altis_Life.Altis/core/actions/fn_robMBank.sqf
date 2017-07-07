private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_pos"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
//_kassa = 1000; //The amount the shop has to rob, you could make this a parameter of the call (https://community.bistudio.com/wiki/addAction). Give it a try and post below ;)
_action = [_this,2] call BIS_fnc_param;//Action name

if(side _robber != civilian) exitWith { hintSilent "Du kannst diese Bankfiliale nicht überfallen!" };
if(_robber distance _shop > 5) exitWith { hintSilent "Du musst näher als 5m bei ihm stehen!" };


if (isNil "life_Event") then {life_Event = false; publicVariable "life_Event";};
if (life_Event) exitWith {titleText ["***Momentan findet ein Event statt, \n Aktionen dieser Art sind momentan nicht gestattet!***","PLAIN"];};

if (isNil "life_Raub") then {life_Raub = false; publicVariable "life_Raub";};
if (life_Raub) exitWith {titleText ["***Momentan findet bereits ein aktiver Raub statt, \n Versuche es später nocheinmal!***","PLAIN"];};


if !(_kassa) then { _kassa = 1000; };
if (_rip) exitWith { hintSilent "Der Überfall hatte bereits stattgefunden!" };
if (vehicle player != _robber) exitWith { hintSilent "Steig aus deinem Fahrzeug aus!" };

if !(alive _robber) exitWith {};
if (currentWeapon _robber == "") exitWith { hintSilent "HaHa, Du hast keine Waffe! Verschwinde Hier!" };

_cops = (west countSide playableUnits);
/*if(_cops < 4) exitWith{
    [_vault,-1] remoteExecCall ["disableSerialization;"];
    hint "Es gibt momentan nicht genügend aktive Polizisten auf der Insel!";
};	*/

life_Raub = true;
publicVariable "life_Raub";
_rip = true;
_kassa = 50000 + round(random 100000);
_shop removeAction _action;
_shop switchMove "AmovPercMstpSsurWnonDnon";
_chance = 100;

if(_chance >= 85) then {
    hintSilent "Der stille Alarm wurde ausgelöst, die Polizei wird gleich hier erscheinen!";
    [1,format["ALARM! - Bankfiliale: %1 wird gerade ausgeraubt!", _shop]] remoteExec ["life_fnc_broadcast",west,false];
};


disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Bleibe innerhalb von (10m)um ausrauben zu können!! (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;
 
if(_rip) then
{
while{true} do
{
uiSleep 5;
_cP = _cP + 0.01;
_progress progressSetPosition _cP;
_pgText ctrlSetText format["Raub im Gange, entferne dich nicht weiter!(%1%2)...",round(_cP * 100),"%"];
_Pos = position player; // by ehno: get player pos
				                _marker = createMarker ["Marker200", _Pos]; //by ehno: Place a Maker on the map
				                "Marker200" setMarkerColor "ColorRed";
				                "Marker200" setMarkerText "!! Bankfilialenüberfall !!";
				                "Marker200" setMarkerType "mil_warning";			
if(_cP >= 1) exitWith {deleteMarker "Marker200"; life_Raub = false;};

if!(alive _robber) exitWith { _rip = false; life_Raub = false; deleteMarker "Marker200";};
if(_robber distance _shop > 10.5) exitWith { deleteMarker "Marker200"; _shop switchMove ""; hintSilent "Bleibe innerhalb von (10m) um die Tanke auszurauben! - Jetzt ist die Kasse geschlossen."; 5 cutText ["","PLAIN"]; _rip = false; };
5 cutText ["","PLAIN"];

titleText[format["Du hast $%1, gestolen, Verschwinde bevor die Polizei hier auftaucht!",[_kassa] call life_fnc_numberText],"PLAIN"];
deleteMarker "Marker200"; // by ehno delete maker
life_cash = life_cash + _kassa;

life_Raub = false;
_rip = false;
life_use_atm = false;
uiSleep (30 + random(180));
life_use_atm = true;
if!(alive _robber) exitWith {};
//[[getPlayerUID _robber,name _robber,"212"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
[getPlayerUID _robber,name _robber,"212"] remoteExec ["life_fnc_wantedAdd"];
};
uiSleep 300;
_action = _shop addAction["Bankfiliale ausrauben",life_fnc_robMBank];	
_shop switchMove "";
[] call life_fnc_hudUpdate;

