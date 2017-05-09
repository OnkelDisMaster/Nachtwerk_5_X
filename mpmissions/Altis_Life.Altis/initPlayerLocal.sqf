/*
	File: initPlayerLocal.sqf
	
	Description:
	Starts the initialization of the player.
*/
"BIS_fnc_MP_packet" addPublicVariableEventHandler {_this call life_fnc_MPexec};
if(!hasInterface) exitWith {}; //This is a headless client, he doesn't need to do anything but keep being headless..
#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
CONST(BIS_fnc_endMission,BIS_fnc_endMission);
[] execVM "core\init.sqf";

//Execute JIP code.
if((_this select 1)) then {
	[] execVM "core\jip.sqf";
};

//Illegale Marker nicht für Cops

    if (playerSide == west) then 
		{
            private["_illegalmarkers"];
            while {true} do
            {
                    _illegalmarkers = ["heroin_1","cocaine_1","cocaine_2","weed_1","meth_1","Dealer_1_1","Dealer_1_2","Dealer_1_3"];
                    
                    { deleteMarkerLocal _x; } forEach _illegalmarkers;
                    sleep 10;
            };
		};