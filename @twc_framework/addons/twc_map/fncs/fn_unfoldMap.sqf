// assign the player ID of the person who placed the map
// then when they look at, it'll check if they're the existing owner
// if they aren't, and didn't have a map before, that one will be removed when map is closed
// otherwise, just opens their existing map
if (isDedicated) exitWith {};

params ["_caller"];

_direction = getDir _caller;
_position = getPosASL _caller vectorAdd [1 * sin _direction, 1 * cos _direction, 0.02];
_memoryPoint = "";
_vector = 0;

_markers = [];

if (stance _caller != "CROUCH") then {
	_caller playAction "Crouch";
};

[{
	params ["_args", "_idPFH"];
	_args params ["_unit", "_pos", "_memPoint", "_vector"];

	if !((animationState player select [4, 4]) isEqualTo "pknl") exitWith {};
	[_idPFH] call CBA_fnc_removePerFrameHandler;

	_map = "Land_Map_Altis_F" createVehicle [0, 0, 0];
	_unit playAction "PutDown";

	_args = _args + [_map];

	[{(animationState player select [25, 7]) isEqualTo "putdown"}, {
		params ["_unit", "_pos", "_memPoint", "_vector", "_map"];
		_map setPosASL _pos;
		_map setVariable ["Owner", _unit, true];
		_unit unlinkItem "ItemMap";
	}, _args] call CBA_fnc_waitUntilAndExecute;
}, 0, [_caller, _position, _memoryPoint, _vector]] call CBA_fnc_addPerFrameHandler;