/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_dis"];
_zone1 = getMarkerPos "safezone_kav"; // MARKERS FOR SAFEZONE
_zone2 = getMarkerPos "reb_hq";
_zone3 = getMarkerPos "reb_sued";
_zone4 = getMarkerPos "reb_lager";
_zone5 = getMarkerPos "Save_Jail";
_dis = 200; // DISTANCE SAFE ZONE (euren Marker Radius angeben) 
_inArea = false;

waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{
		while {true} do
		{
			if (alive player) then
			{	
				if (((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis) || (_zone4 distance player < _dis) || (_zone5 distance player < _dis)) && (!_inArea)) then 
				{ 
					_inArea = true;
					hint parseText "<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du betrittst eine Safezone!";
					player allowDamage false;
				};
				if (((_zone1 distance player > _dis) && (_zone2 distance player > _dis) && (_zone3 distance player > _dis) && (_zone4 distance player > _dis) &&(_zone5 distance player > _dis)) && (_inArea)) then 
				{ 
					_inArea = false;
					hint parseText "<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du verlässt die Safezone!";
					player allowDamage true;
				};
			};
			sleep 10;
		};
	};
	
	case civilian:
	{
		while {true} do
		{
			if (alive player) then
			{	
				if (((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis) || (_zone4 distance player < _dis) || (_zone5 distance player < _dis)) && (!_inArea)) then 
				{ 
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint parseText "<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du betrittst eine Safezone!";
				};
				if (((_zone1 distance player > _dis) && (_zone2 distance player > _dis) && (_zone3 distance player > _dis) && (_zone4 distance player > _dis) &&(_zone5 distance player > _dis)) && (_inArea)) then 
				{ 
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText "<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du verlässt die Safezone!";
					player allowDamage true;
				};
			};
			sleep 10;
		};
	};
	
	case independent:
	{
		while {true} do
		{
			if (alive player) then
			{	
				if (((_zone1 distance player < _dis) || (_zone2 distance player < _dis) || (_zone3 distance player < _dis) || (_zone4 distance player < _dis) || (_zone5 distance player < _dis)) && (!_inArea)) then 
				{ 
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint parseText "<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du betrittst eine Safezone!";
					player allowDamage false;
				};
				if (((_zone1 distance player > _dis) && (_zone2 distance player > _dis) && (_zone3 distance player > _dis) && (_zone4 distance player > _dis) &&(_zone5 distance player > _dis)) && (_inArea)) then 
				{ 
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText "<t color='#FF0000'><t size='2'><t align='center'>Warnung<br/><br/><t align='center'><t size='1'><t color='#ffffff'>Du verlässt die Safezone!";
					player allowDamage true;
				};
			};
			sleep 10;
		};
	};
};