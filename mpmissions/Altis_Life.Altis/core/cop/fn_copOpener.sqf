/*
 police sender, open gates from inside the car (only for cops) 
 by Insane
 www.tdc-clan.eu
*/

	{
		if (_x animationPhase "Door_1_rot" == 1) then { //if schranke offen
			_x animate ["Door_1_rot", 0];
		} 
		else 
		{   //sonst zu
			_x animate ["Door_1_rot", 1];
		};
		
	} forEach (nearestObjects [player, ["Land_BarGate_F"], 20]);

{
	if (_x animationPhase "Door_1_rot" == 1) then {
		_x animate ["Door_1_rot", 0];
		_x animate ["Door_2_rot", 0];
		_x setVariable['bis_disabled_door_1',1,true];
		_x setVariable['bis_disabled_door_2',1,true];
	} 
	else 
	{
		_x animate ["Door_1_rot", 1];
		_x animate ["Door_2_rot", 1];
		_x setVariable['bis_disabled_door_1',0,true];
		_x setVariable['bis_disabled_door_2',0,true];
	};
	
} forEach (nearestObjects [player, ["Land_i_Shed_Ind_F"], 25]);