private["_id","_ret"];
_id = _this select 0;
_ret = _this select 1;
_id = owner _id;
_ret = owner _ret;

<<<<<<< HEAD
    Description:
    Used for the admin menu returns the player ID for in-game bans/kicks.
    https://community.bistudio.com/wiki/Multiplayer_Server_Commands
*/
private["_id","_ret"];
_id = owner (_this select 0);
_ret = owner (_this select 1);

[_id] remoteExecCall ["life_fnc_adminid",_ret];
=======
[[_id],"life_fnc_adminid",_ret,false] call life_fnc_MP;
>>>>>>> origin/master
