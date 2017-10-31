/*
    File: fn_amountBounty.sqf
    Author: !TS JORDAN
	Modified by Valle @Nachtwerk Community
	
    Description:
    Checks if the person is on the bounty list and awards the bountyH for killing them.
*/
params [
    ["_uid","",[""]],
    ["_civ",objNull,[objNull]],
    ["_cop",objNull,[objNull]],
	["_lebend",false,[false]],
	["_bonus",false,[false]]
];
if (isNull _civ || isNull _cop) exitWith {};
private ["_amount","_bonusCash","_bonusKonto","_BonusID","_query","_queryResult"];
_BonusID = "00000000000000001";
_bonusCash = 0;

_query = format ["SELECT bountyID, bountyName, bounty FROM bounty WHERE bountyID='%1'",_uid];
_queryResult = [_query,2] call DB_fnc_asyncCall;

if !(count _queryResult isEqualTo 0) then {
    _amount = _queryResult param [2];
	
	if (_bonus) then {
		_query = format ["SELECT bounty FROM bounty WHERE bountyID='%1'",_BonusID];
		_queryResult = [_query,2] call DB_fnc_asyncCall;
			_bonusKonto = (_queryResult param [0]);
			_bonusCash =  _bonusKonto * 0.25;//(round(random(30)+1)/100);
			_bonusKonto = _bonusKonto - _bonusCash;
			
			_query = format ["UPDATE bounty SET bounty='%1' WHERE bountyID ='%2'",_bonusKonto,_BonusID];
			[_query,2] call DB_fnc_asyncCall;
		};
	};

    if !(_amount isEqualTo 0) then {
        [_amount,_bonusCash] remoteExecCall ["life_fnc_bountyHunterReceive",(owner _cop)];
    };
	if ((_lebend) && (side _civ isEqualTo civilian)) then {[_civ, 5] call life_fnc_arrestAction;};
};
