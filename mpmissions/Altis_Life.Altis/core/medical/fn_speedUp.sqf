/*

	Author Shinji
	Speeder Script for higher endspeed!

*/
private ["_vehicle","_maxspeed","_dmg","_chip"];
_vehicle = _this select 0;

_chip = _vehicle getVariable ["Chipsatz",0];
if (_chip isEqualTo 0) exitwith {}; // nope??

_vehicle setvariable ["speeder",true,true];
_maxspeed = getNumber(configFile >> "CfgVehicles" >> (typeof _vehicle) >> "maxSpeed") -5;
_boosterSpeed = _maxspeed;
if (_chip >1) then {
	_boosterSpeed = _maxspeed + 30; // illegal
} else {
	_boosterSpeed = _maxspeed + 20; // legal
};

_dmg = getdammage _vehicle;
hint "Chip aktiviert...";
while{(_vehicle getvariable "speeder")} do {

	if (fuel _vehicle < 0.02) exitwith {
		hint "Chip wurde deaktiviert...";
		_vehicle setvariable ["speeder",false,true];
	};
	 if (speed _vehicle >= _maxspeed && speed _vehicle <= _boosterSpeed && (alive _vehicle) && ((getdammage _vehicle)<=_dmg) && (alive player) && (vehicle player != player)) then {	
		if ((driver _vehicle != player)) exitwith {};
		_vel = velocity _vehicle;  
		_dir = direction _vehicle;  
		_speed = 1; 
		_vehicle setVelocity 	
		[   	(_vel select 0) + (sin _dir * _speed),
				(_vel select 1) + (cos _dir * _speed),    
				(_vel select 2)  
		];
		_f = fuel _vehicle;
		_vehicle setfuel (_f - 0.0006); // fuelverbrauch / halbe Sekunde == 0,1 Liter
	};
	// illegale geshcwindigkeit bzw. beschleuinigung erhöhen
	 if (_chip > 1 && speed _vehicle <= _maxspeed &&  speed _Vehicle > 10 && (alive _vehicle) && ((getdammage _vehicle)<=_dmg) && (alive player) && (vehicle player != player)) then {	
		if ((driver _vehicle != player)) exitwith {};
		_vel = velocity _vehicle;  
		_dir = direction _vehicle;  
		_val = 0.8;	
		_speed = _val;
		_vehicle setVelocity 	
		[   	(_vel select 0) + (sin _dir * _speed),
				(_vel select 1) + (cos _dir * _speed),    
				(_vel select 2) 
		];
		_f = fuel _vehicle;
		_vehicle setfuel (_f - 0.0008); // fuelverbrauch / halbe Sekunde == 0,1 Liter		
	};
	//
	if (vehicle player == player || !(alive player) || !(alive _vehicle) || ((getdammage _vehicle)>_dmg)) then {
		hint "Chip wurde deaktiviert...";
		_vehicle setvariable ["speeder",false,true];
	};	
	if (_chip < 2) then {	
		sleep 0.5;
	} else {		
		sleep 0.2;
	}
};