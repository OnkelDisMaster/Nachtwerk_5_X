if(isServer)exitWith{};
private["_msg","_bargeld"];
_msg = _this select 1;
_bargeld = _this select 2;


if (playerSide isEqualTo west) then 
{
	hintSilent parseText [_msg + "<br/><br/>Bargeld: %1", _bargeld];	
} else {
	hintSilent parseText _msg;
};