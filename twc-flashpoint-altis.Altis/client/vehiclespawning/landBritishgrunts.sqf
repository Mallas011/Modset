//British:
SpawnLRAction = ["SpawnLR","Land Rover","",{_oldVeh = nearestObjects [jetSpawnPad, ["Car","Tank"],10]; {deleteVehicle _x}forEach _oldVeh; _veh = "CUP_B_LR_Transport_GB_W" createVehicle (position jetSpawnPad);_dir = getDir jetSpawnPad; _dir = _dir + 180; _veh setDir _dir; [_veh, 180, 1200, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnLRAction] call ace_interact_menu_fnc_addActionToClass;