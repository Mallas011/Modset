params ["_heli", "_length"];

if (_heli isKindOf "Helicopter") then {
	_cargoRopesDeployed = _heli getVariable ["twc_rope_cargo_ropes_deployed", false];

	if (!_cargoRopesDeployed) then {
		_heli setVariable ["twc_rope_cargo_ropes_deployed", true, true];

		_cargoRopes = _heli getVariable ["twc_rope_cargo_ropes",[]];

		{ ropeDestroy _x } forEach _cargoRopes;
		_cargoRopes = _cargoRopes + [ropeCreate [_heli, "slingload0", 0]]; 
		_cargoRopes = _cargoRopes + [ropeCreate [_heli, "slingload0", 0]]; 
		_cargoRopes = _cargoRopes + [ropeCreate [_heli, "slingload0", 0]]; 
		_cargoRopes = _cargoRopes + [ropeCreate [_heli, "slingload0", 0]]; 
		
		{ ropeUnwind [_x, 5, _length]; } forEach _cargoRopes;
		_heli setVariable ["twc_rope_cargo_ropes", _cargoRopes, true];
	};
};