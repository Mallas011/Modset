params ["_unit"];

if (!local _unit) exitWith {};
if (!alive _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

_unCon = (_unit getVariable ["ACE_isUnconscious", false]);
_continue = _unCon;

if (_unCon) then {
	_unit hideObjectGlobal false;
	_bloodVolume = (_unit getVariable ["ace_medical_bloodVolume", 100]);
	_bloodPressure = [_unit] call ACE_medical_fnc_getBloodPressure;
	_heartRate = (_unit getVariable ["ace_medical_heartRate", 80]);
	_inReviveState = (_unit getVariable ["ace_medical_inReviveState", false]);
	
	// sync every second over the network our diagnosable vitals when uncon, as it's important
	_unit setVariable["ace_medical_heartRate", _heartRate, true];
	_unit setVariable["ace_medical_bloodPressure", _bloodPressure, true];
	
	_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];

	if (_inReviveState) then {
		// should we be ?
		if (_heartRate >= 30 && _bloodVolume >= 50 && _bloodPressureH >= 30) then {
			_unit setVariable ["ace_medical_inReviveState", false, true];
		};
	};

	if (_bloodVolume <= 10 && _bloodPressureH <= 20) exitWith {
		[_unit, true, false] call ace_medical_fnc_setDead;
		_continue = false;
	};

	if (!([_unit] call ace_medical_fnc_getUnconsciousCondition)) then {
		_unit setVariable ["ACE_isUnconscious", false, true];
		_continue = false;
	};
};

if (_continue) then {
	// execute this fnc again in a second
	[twc_medical_fnc_extendedUnconLoop, [_unit], 1] call CBA_fnc_waitAndExecute;
};