/*
*   AO Funtion for Flashpoint for use only on TWC by Jayman
*
*   Parameters
*
*   0 - Marker that is named with the name of the town it is placed over
*
*
*  returns
*
*  fuck all expect for one AO
*
*/

params["_marker"];

_CentralMarker = format ["%1",_marker];

//units
_mechsquad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySquad");
_bmp = ["CUP_O_BMP2_SLA"];
_ATteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Motorized" >> "CUP_O_SLA_MotInfSection_AT");
_AAteam = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionAA");
_BRDM = ["CUP_O_BRDM2_SLA"];
_ZU23 = ["CUP_O_2S6M_RU"];


for "_i" from 1 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, _mechsquad] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 350] call CBA_fnc_taskPatrol;
	};
};

for "_i" from 1 to 2 do {
	if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,200],random 360,0] call SHK_pos;
		_PatrolSquad = [_pos, EAST, _bmp] call BIS_fnc_spawnGroup;
		[_PatrolSquad, getmarkerpos _CentralMarker, 350] call CBA_fnc_taskPatrol;
	};
};

[_CentralMarker, _ATDefend]spawn{
	if isServer then {
		private ["_pos","_m"];
		sleep 5;
		_pos = [getmarkerpos (_this select 0),[0,100],random 360,0] call SHK_pos;
		_DefendAT = [_pos, EAST, (_this select 1)] call BIS_fnc_spawnGroup;
		[_ATDefend, getmarkerpos (_this select 0), 200] call CBA_fnc_taskPatrol;
	};
};
	
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_PatrolBRDM = [_pos, EAST, _BRDM] call BIS_fnc_spawnGroup;
		[_PatrolBRDM, getmarkerpos _CentralMarker, 200] call CBA_fnc_taskPatrol;
	};
	
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,50],random 360,0] call SHK_pos;
		_DefendAA = [_pos, EAST, _AAteam] call BIS_fnc_spawnGroup;
		[_DefendAA, getmarkerpos _CentralMarker, 100] call CBA_fnc_taskDefend;
	};
	
if isServer then {
		private ["_pos","_m"];
		_pos = [getmarkerpos _CentralMarker,[0,100],random 360,0] call SHK_pos;
		_PatrolSPAA = [_pos, EAST, _ZU23] call BIS_fnc_spawnGroup;
		[_PatrolSPAA, getmarkerpos _CentralMarker, 200] call CBA_fnc_taskDefend;
	};