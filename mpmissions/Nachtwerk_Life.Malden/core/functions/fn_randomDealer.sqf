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
_pos1 = [[7569.909,6702.456, 0.698],
[8289.713,6056.632, 0.687],
[7073.359,12196.18, 0],
[7646.665,10750.171, 0]];
//Pos Dealer2
_pos2 =[[5191.743,1192.646, 0.237],
[12028.864,4831.263, 0],
[8264.763,2870.78, 0],
[2332,3407.927, 0]];
//Pos Dealer3
_pos3 =[[5138.524,7351.893, 0],
[3185.279,6903.196, 0],
[4958.309,10299.152, 0],
[6768.014,10804.042, 0.434]];
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