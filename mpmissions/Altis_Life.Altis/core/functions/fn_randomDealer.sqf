/*
#####################################################################
# Datei: fn_randomDealer.sqf #
# Autor:Valle #
# Beschreibung: Dealer Positionswechsel
#####################################################################
*/
private ["_pos1", "_pos2", "_pos3", "_auswahl1", "_auswahl2", "_auswahl3", "_handled", "_dealer", "_dist", "_msg"];
//Pos Dealer1
_pos1 = [[20884.195,14623.686,2.739327], //[[L,B,H],Winkel] <-> [[L,H,B],Winkel] = mission.sqm
 [25271.766,18949.299,10.189758], 
 [26202.148,24187.047,6.8774958],
 [16540.91,20297.336,6.0132408]];
//Pos Dealer2
_pos2 =[[3610.8689,11568.217,4.8304186], 
 [13658.33,14932.125,5.8728094],
 [3655.438,19759.625,210.43184],
 [10538.716,22520.068,14.11249]];
//Pos Dealer3
_pos3 =[[17129.582,9993.2607,26.843603], 
 [23050.662,7260.1406,48.772758],
 [11523.207,7086.0918,80.960213],
 [10183.392,19.143129,9689.8057]];
//Zufalls Possitionsauswahl
_auswahl1 = _pos1 call BIS_fnc_selectRandom;
_auswahl2 = _pos2 call BIS_fnc_selectRandom;
_auswahl3 = _pos3 call BIS_fnc_selectRandom;
_auswahlPosi = [_auswahl1, _auswahl2, _auswahl3];
_dealer = [Dealer_1,Dealer_2,Dealer_3];
_dist = 500;
{
 _deal = _x;
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
 //hint parseText format ["<t color='#ff0000'><t size='2'><t align='center'>Dealer ist untergetaucht!"];
 _msg = "Die Dealer sind untergetaucht!";
 [1, _msg] remoteExecCall ["life_fnc_broadcast",-2];
 };
} foreach _dealer;