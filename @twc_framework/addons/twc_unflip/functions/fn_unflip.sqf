params [["_vehicle", objNull, [objNull]]];

if (isNull _vehicle) exitWith {false};

private _upsideDown = (vectorUp _vehicle vectorDotProduct surfaceNormal getPos _vehicle) < -0.80;
private _bank = _vehicle call BIS_fnc_getPitchBank select 1;

private _flipLeft = _bank >= 0;
if (_upsideDown) then { _flipLeft = !_flipLeft; };

if (!_upsideDown && 55 > abs _bank) exitWith {false};

private _bbr = boundingBoxReal _vehicle;
private _vehicleWidth = abs (((_bbr select 0) select 0) * 2);

private _force = getMass _vehicle * ([1 + (_vehicleWidth/10), _vehicleWidth] select _upsideDown);

private _forcePointX = _bbr select ([0, 1] select _flipLeft) select 0;
private _forcePointZ = _bbr select ([1, 0] select _upsideDown) select 2;

_vehicle addForce [
	_vehicle vectorModelToWorld [[_force, -_force] select _flipLeft, 0, 0],
	[_forcePointX, 0, _forcePointZ]
];

true