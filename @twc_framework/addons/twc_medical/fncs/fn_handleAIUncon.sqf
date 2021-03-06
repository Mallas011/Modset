params ["_unit"];

if (!local _unit) exitWith {};
if (!alive _unit) exitWith {};

_unCon = (_unit getVariable ["ACE_isUnconscious", false]);
_continue = _unCon;

if (_unCon) then {
	_unit hideObjectGlobal false;

	_diceRoll = floor random (5);

	if (_diceRoll < 2) then {
		[_unit, true] call ace_medical_fnc_setDead;
	} else {
		if (_diceRoll == 4) then {
			// rolled nat 5, get healed'
			[_unit, _unit] call ace_medical_fnc_treatmentAdvanced_fullHeal;
		};
	};

	if (!([_unit] call ace_medical_fnc_getUnconsciousCondition)) then {
		_unit setVariable ["ACE_isUnconscious", false, true];
		_continue = false;
	};
};

if (_continue) then {
	// execute this fnc again in a bit
	_delay = (floor random (2)) + 1;
	[twc_medical_fnc_handleAIUncon, [_unit], _delay] call CBA_fnc_waitAndExecute;
};