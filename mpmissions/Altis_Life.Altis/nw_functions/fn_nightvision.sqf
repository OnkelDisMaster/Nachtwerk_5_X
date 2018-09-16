
if (!hasInterface) exitWith {};

SL_var_fullScreenNightVision =
[
	"G_Combat_Goggles_tna_F",
	"G_Balaclava_TI_G_tna_F"
];


SL_fn_fullScreenNightVision = {
	params ["_displayCode","_keyCode","_isShift","_isCtrl","_isAlt"];
	_handled = false;
	if ((_keyCode in actionKeys "NightVision")) then
	{
		switch SL_var_fullScreenNightVisionMode do
		{
			case 0: {
				if (cameraView != "GUNNER") then
				{
					player action ["nvGoggles", player];
					SL_var_fullScreenNightVisionMode = currentVisionMode player;
					_handled = true;
				};
			};
			case 1: {
				if (cameraView != "GUNNER") then
				{
					player action ["nvGogglesOff", player];
					SL_var_fullScreenNightVisionMode = currentVisionMode player;
					_handled = true;
				};
			};
		};
	};
	_handled
};

waitUntil {alive player};

player addEventHandler ["GetOutMan", {
	params ["_player", "_role", "_vehicle", "_turret"];
		switch SL_var_fullScreenNightVisionMode do
		{
			case 1: {
				_player action ["nvGoggles", _player];
				SL_var_fullScreenNightVisionMode = currentVisionMode _player;
			};
			case 0: {
				_player action ["nvGogglesOff", _player];
				SL_var_fullScreenNightVisionMode = currentVisionMode _player;
			};
		};
}];

player addEventHandler ["Put", {
	params ["_player", "_container", "_item"];
		switch SL_var_fullScreenNightVisionMode do
		{
			case 1: {
				_player action ["nvGoggles", _player];
				SL_var_fullScreenNightVisionMode = currentVisionMode _player;
			};
			case 0: {
				_player action ["nvGogglesOff", _player];
				SL_var_fullScreenNightVisionMode = currentVisionMode _player;
			};
		};
}];

player addEventHandler ["Take", {
	params ["_player", "_container", "_item"];
    switch SL_var_fullScreenNightVisionMode do
		{
			case 1: {
				_player action ["nvGoggles", _player];
				SL_var_fullScreenNightVisionMode = currentVisionMode _player;
			};
			case 0: {
				_player action ["nvGogglesOff", _player];
				SL_var_fullScreenNightVisionMode = currentVisionMode _player;
			};
		};
}];

SL_var_fullScreenNightVisionMode = currentVisionMode player;

waitUntil {!(isNull (findDisplay 46))};
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call SL_fn_fullScreenNightVision;"];