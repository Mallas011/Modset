waitUntil{bluforDeath > 20};

bluforDeath = 0;
publicVariable "bluforDeath";

if((str capturedArray) == "[]")exitWith{[] call twc_redforSiteRecapAttempt};

_type = ["Mechanized", "Motorized","Airborne"] call BIS_fnc_selectRandom;

if (_type == "Mechanized") then {
	[] call twc_redforAttackMechanized;
};
if (_type == "Motorized") then {
	[] call twc_redforAttackMotorized;
};
if (_type == "Motorized") then {
	[] call twc_redforAttackAirborne;
};
[] call twc_redforSiteRecapAttempt;