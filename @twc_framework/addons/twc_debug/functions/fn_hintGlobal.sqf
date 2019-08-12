params ["_message", ["_tag", "Debug"], ["_serverOnly", false]];

if (isNil _message) then {
	_message = "TWC_Debug_fnc_hintGlobal was called with nil message";
};

if (_serverOnly) exitWith {
	["TWC_Debug_Hint", [_message, _tag]] call CBA_fnc_serverEvent;
};

["TWC_Debug_Hint", [_message, _tag]] call CBA_fnc_globalEvent;