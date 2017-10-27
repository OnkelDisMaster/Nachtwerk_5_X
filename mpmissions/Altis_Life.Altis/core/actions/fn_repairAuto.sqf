private [_nearestVehicle, _value];

_value = 300;
_nearestVehicle = nearestObjects[getPosATL player,["Car","Ship","Submarine","Air"],10] select 0;
if(isNil "_nearestVehicle") exitWith {hint "Es ist kein Auto in der Nähe"};

[life_atmcash] call life_fnc_numberText;

if(_value > life_atmcash) then {hint "Du hast nicht genug Geld auf deinem Konto!"
	} else {
		life_atmcash = life_atmcash - _value;
		hint "Das hat dich 300 € gekostet!";
		_nearestVehicle setDamage 0;
	};