/*
#####################################################################
# Datei: fn_randomDealer.sqf #
# Autor:Valle #
# Beschreibung: Dealer Positionswechsel
#####################################################################
*/
private ["_pos1", "_pos2", "_pos3", "_auswahl1", "_auswahl2", "_auswahl3", "_handled", "_dealer", "_deal", "_deal_marker", "_dist", "_msg", "_n"];
//Pos Dealer1
//[[L,B,H],Winkel] <-> [[L,H,B],Winkel] = mission.sqm
_pos1 = [[3750.843,11903.735,0],
[2697.595,11487.995,1.052],
[2983.471,15412.148,0],
[7129.164,11022.14,0.927]];

_pos2 = [[14302.2,17408.881,0],
[13325.527,14518.898,0.113],
[9426.002,20169.967,0.012],
[14559.643,20793.336,0.885]];

_pos3 = [[20889.42,14623.905,0],
[20949.936,12270.506,0],
[16377.535,9842.672,0.012],
[20759.215,18457.307,0.011]];

//Zufalls Possitionsauswahl
_auswahl1 = _pos1 call BIS_fnc_selectRandom;
_auswahl2 = _pos2 call BIS_fnc_selectRandom;
_auswahl3 = _pos3 call BIS_fnc_selectRandom;
_auswahlPosi = [_auswahl1, _auswahl2, _auswahl3];
_dealer = [Dealer_1,Dealer_2,Dealer_3];
_dist = 500;
_n = 0;
{
 _deal = _x;
 _deal_marker = ["Dealer_1_1","Dealer_2_1","Dealer_3_1"];
 _handled = false;
 {
 _player = _x;
 if (!isPlayer _player) exitWith {};
 if ((_player distance2D _deal)<_dist) then {
 _handled = true;
 };
 } foreach playableunits;
 if !(_handled) then {
 _deal setpos (_auswahlPosi select _forEachIndex);
 (_deal_marker select _n) setMarkerPos (_auswahlPosi select _forEachIndex);
 //hint parseText format ["<t color='#ff0000'><t size='2'><t align='center'>Dealer ist untergetaucht!"];
 _msg = "Die Dealer sind untergetaucht!";
 [1, _msg] remoteExecCall ["life_fnc_broadcast",-2];
 };
 _n = _n + 1;
} foreach _dealer;