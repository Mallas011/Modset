//Calls all the functions on player start.
params["_unit"];

if (!hasInterface || isDedicated) exitWith {};
if (player != _unit) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

ACE_maxWeightDrag = 10000000;
ACE_maxWeightCarry = 700;

_action = ["CheckID", "Check Vehicle ID", "", {[_target] call twc_fnc_checkvehicleid}, {true}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;





openBoltFnc = {
	if (!hasinterface) exitwith {};
	_openbolt = [(configFile >> "CfgWeapons" >> (primaryweapon player)), "twc_openbolt", 0] call BIS_fnc_returnConfigEntry;

	if (_openbolt > 0) then {
		_openboltcoef = [(configFile >> "CfgWeapons" >> (primaryweapon player)), "twc_openbolt_coef", 1] call BIS_fnc_returnConfigEntry;

		[{
			if (random 1 < 0.5) then {
				[player, primaryweapon player] call ace_overheating_fnc_jamWeapon;
			};
			[] call openBoltFnc;
		}, [], (random (6000 / _openboltcoef)) + 200] call CBA_fnc_waitAndExecute;
	} else {
		[{ [] call openBoltFnc; }, [], 900] call CBA_fnc_waitAndExecute;
	};
};

[] call openBoltFnc;


//transonic ballistic instability. Means subguns/pistols don't stay accurate beyond 150-200m and 556 rifles can't plink at 900m if you get a good enough scope and some tracers. Also means that longer barrel weapons like the L86 can reach out further, because their higher muzzle velocity means they stay supersonic for longer

player addEventHandler ["Fired", { 
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
	if (!(_unit == player)) exitwith {};
	if (!((vehicle player) == player)) exitwith {};
	
	//I haven't noticed a performance hit, but don't poke the bear if they're struggling already
	if (diag_fps < 15) exitwith {};
	
	//if it's much slower than the speed of sound, no buffeting necessary. for ugl's and the like
	if ((speed _projectile) < 950) exitwith {};
	
	[_projectile, _ammo] spawn {
		params ["_projectile", "_ammo"];
		
		// wait until the bullet is passing through the sound barrier or it's gone
		waituntil {((((speed _projectile) < 1500))) || (!alive _projectile)};
		if (!alive _projectile) exitwith {}; 

		//caliber detection. 'Caliber' in config is often set up weird to help with penetration, so use hit instead. Multiplies the buffeting by how chunky the bullet is and how far it's gone already to differntiate between high and low velocity bullets
		_mult = (((((((player distance _projectile) * -1) + 2000) * 0.0006) - (((getNumber (configFile >> "CfgAmmo" >> _ammo >> "hit")) - 5) * 0.1)) max 0.05) min (missionnamespace getvariable ["tlimit", 0.5]));


		//systemchat ("transonic at " + (str(player distance _projectile)) + "m with a mult of " + (str _mult));

		//start buffeting. small modifier first, then ramps up to full after a second or two
		_mods = 0;
		while {alive _projectile} do {
			//if it's passed completely through the sound barrier, stop buffeting
			if ((speed _projectile) < 900) exitwith {};
			_projectile setvelocity [(velocity _projectile select 0) + (((random 8) - 4) * (_mult * _mods)), (velocity _projectile select 1) + (((random 8) - 4) * (_mult * _mods)), 	(velocity _projectile select 2) + (((random 4) - 2) * (_mult * _mods))];
			
			sleep (random 0.4);
			
			if (_mods < 1) then {
				_mods = _mods + 0.2;
			};
		};
	};
}];


/*
//storing an extra weapon on the back.  will soon put weapon animation on it as well
//made mostly for coin rifleman and csms.
//fuck ace for not adding it themselves
twc_weaponOnBack = [];

player addEventHandler ["InventoryOpened",{
	_handle = []spawn{
		disableSerialization;
		waituntil {!(isnull (findDisplay 602))};
		 
		_ctrl3 = findDisplay 602 ctrlCreate ["RscBackground", -1]; 
		_ctrl3 ctrlSetPosition [1.075,0.1,0.3,0.58]; 
		_ctrl3 ctrlSetBackgroundColor [0.2,0.2,0.2, 0.69999999];
		_ctrl3 ctrlCommit 0; 
		 
		_ctrl = findDisplay 602 ctrlCreate ["RscButton", -1]; 
		_ctrl ctrlSetPosition [1.075,0.1,0.3,0.125];
		_ctrl ctrlSetBackgroundColor [0.1,0.1,0.1,1];
		_ctrl ctrlCommit 0; 
		_ctrl ctrlSetText "Weapon on Back"; 
		_ctrl ctrlAddEventHandler ["ButtonClick", {[] call twc_fnc_putWeaponOnBack}];
		
		_ctrl2 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl2 ctrlSetPosition [1.125,0.24,0.2,0.13];
		_ctrl2 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl2 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl2 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_primary_gs.paa";
		};

		_ctrl3 = findDisplay 602 ctrlCreate ["RscPicture", -1]; 
		_ctrl3 ctrlSetPosition [1.125,0.455,0.2,0.13];
		_ctrl3 ctrlCommit 0;
		if(str twc_weaponOnBack != "[]")then{
			_ctrl3 ctrlSetText (getText (configFile >> "CfgWeapons" >> (uiNamespace getVariable "twc_uiGun") >> "picture"));
		}else{
			_ctrl3 ctrlSetText "a3\ui_f\data\GUI\Rsc\RscDisplayGear\ui_gear_secondary_gs.paa";
		};		
		
		uiNamespace setVariable ["twc_uiGun",(twc_weaponOnBack select 0)];
		uiNamespace setVariable ["twc_uiGun_old",_ctrl2];
	};
}];

player addEventHandler ["Killed",{
	if(str twc_weaponOnBack == "[]")exitWith{};
	if(vehicle (_this select 0) != (_this select 0))then{
		(vehicle (_this select 0)) addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		(vehicle (_this select 0)) addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			(vehicle (_this select 0)) addMagazine (((twc_weaponOnBack select 1) select 0) select 1);
		};
	}else{
		_ground = "groundweaponHolder" createVehicle (getPos (_this select 0));
		_ground setPos (getPos (_this select 0));
		_ground addWeaponCargoGlobal [(twc_weaponOnBack select 0),1];
		_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 0),1];		
		if(count ((twc_weaponOnBack select 1) select 0) == 2)then{
			_ground addMagazineCargoGlobal [(((twc_weaponOnBack select 1) select 0) select 1),1];
		};
	};
}];

*/
["twc_evh_fnc_setSpectator", { [(_this select 0)] call twc_fnc_toggleSpectator; }] call CBA_fnc_addEventHandler;
["twc_evh_createDiaryRecord", { player createDiaryRecord ["Diary", ["Radio Message", (_this select 0)]]; }] call CBA_fnc_addEventHandler;
["twc_evh_createConvoRecord", { player createDiaryRecord ["Diary", ["Conversation", (_this select 0)]]; }] call CBA_fnc_addEventHandler;

EM_blacklist_obj = [
	"Land_Mil_WiredFence_F", 
	"Land_New_WireFence_5m_F",
	"Land_New_WiredFence_5m_F",
	"Land_New_WireFence_10m_F",
	"Land_New_WiredFence_10m_F",
	"Land_CSA38_zataras2",
	"WireFence",
	"Wire",
	"Fort_RazorWire",
	"LIB_B_Hedgerows_big",
	"Land_I44_Bwf_6_Mlod",
	"Land_I44_Buildings_Barbedwire",
	"Land_I44_Buildings_Barbedwire2",
	"Land_I44_Buildings_Bush_Long",
	"Land_I44_Buildings_Wirefence",
	"Land_I44_Buildings_Trench2",
	"Land_I44_Buildings_Trench2_W",
	"Land_I44_Buildings_Stake1",
	"Land_I44_Buildings_Stake2",
	"Land_I44_Buildings_Stake3",
	"Land_I44_Buildings_Stake4",
	"Land_I44_Buildings_Stake5",
	"Land_I44_Buildings_Stake6",
	"Land_I44_Buildings_Hrt1",
	"Land_I44_Buildings_Hrt1a",
	"Land_I44_Buildings_Hrt1p",
	"Land_I44_Buildings_Hrt3",
	"Land_I44_Misc_Hedge1",
	"Land_I44_Misc_Hedge2",
	"Land_fow_BarbGate",
	"Land_I44_Buildings_Logramp1",
	"Land_I44_Buildings_Logramp2",
	"Land_I44_Buildings_Logramp3",
	"Land_I44_Element_C",
	"Land_WW2_Element_C",
	"Land_WW2_Hemmbalken_1",
	"Land_I44_HedgeHog",
	"Land_WW2_Wire_3",
	"Land_WW2_Wire_2",
	"Land_WW2_Wire_1",
	"Land_CSA38_zataras",
	"Land_CSA38_zatkol2",
	"Land_CSA38_zataras3",
	"Land_CSA38_typA_full_pruchod",
	"Land_CSA38_ocas",
	"Land_CSA38_ocas2",
	"Land_CSA38_ocas3",
	"Land_CSA38_ocas4",
	"Land_CSA38_ocas2_end",
	"Land_CSA38_ocas3_end",
	"Land_CSA38_ocas_end",
	"Land_CSA38_zataras4",
	"Land_fow_Barbedwire",
	"Land_CSA38_jezci",
	"Land_WW2_Wire_Bruno",
	"Land_I44_Buildings_Bunker_AA",
	"Land_I44_Buildings_CT_Straight"
];

[{
	if (isNil {missionNameSpace getVariable "twcModuleEnabled"}) exitWith {
		systemChat "TWC Mission Module wasn't placed down, or enabled.";
	};

	waitUntil { missionNameSpace getVariable ["twcModuleFinished", false] };

	[(missionNameSpace getVariable ["era", "modern"])] spawn twc_fnc_era;
	[(missionNameSpace getVariable ["rollSleeves", false])] spawn twc_fnc_rollShirt;
	[(missionNameSpace getVariable ["run", 0])] spawn twc_fnc_run;
	[(missionNameSpace getVariable ["safeZone", 0])] spawn twc_fnc_safeZone;
	[(missionNameSpace getVariable ["zuesObjects", true])] spawn twc_fnc_zeus;

	_hasWorld = isClass (configFile >> "CfgWorlds" >> worldName);
	if !(_hasWorld) then {
		for [{_i=0}, {_i<5}, {_i=_i+1}] do {
			systemChat "You are missing the map required for this mission!";
		};
	};

	["twc_framework_initComplete", []] call CBA_fnc_localEvent;
}, [], 1] call CBA_fnc_waitAndExecute;