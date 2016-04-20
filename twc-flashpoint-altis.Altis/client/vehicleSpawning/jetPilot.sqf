SpawnA10CASAction = ["SpawnA10CAS","A10 CAS","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_A10_CAS_USA" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnA10CASAction] call ace_interact_menu_fnc_addActionToClass;

SpawnA10ATAction = ["SpawnA10AT","A10 AT","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_A10_AT_USA" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnA10ATAction] call ace_interact_menu_fnc_addActionToClass;

SpawnAV8BATAction = ["SpawnAV8BAT","AV8B AT","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_AV8B_AGM_USMC" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnAV8BATAction] call ace_interact_menu_fnc_addActionToClass;

SpawnAV8BGBU12Action = ["SpawnAV8BGBU12","AV8B GBU12","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_AV8B_GBU12_USMC" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnAV8BGBU12Action] call ace_interact_menu_fnc_addActionToClass;

SpawnAV8BMK82Action = ["SpawnAV8BMK82","AV8B MK82","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_AV8B_MK82_USMC" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnAV8BMK82Action] call ace_interact_menu_fnc_addActionToClass;

SpawnF35BATAction = ["SpawnF35BAT","F35B AT","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_F35B_CAS_USMC" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnF35BATAction] call ace_interact_menu_fnc_addActionToClass;

SpawnF35BCASAction = ["SpawnF35BCAS","F35B CAS","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_F35B_LGB_USMC" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnF35BCASAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHarrierGR9ATAction = ["SpawnHarrierGR9AT","Harrier GR9 AT","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_GR9_AGM_GB" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHarrierGR9ATAction] call ace_interact_menu_fnc_addActionToClass;

SpawnHarrierGR9GBU12Action = ["SpawnHarrierGR9GBU12","Harrier GR9 GBU12","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_GR9_GBU12_GB" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHarrierGR9GBU12Action] call ace_interact_menu_fnc_addActionToClass;

SpawnHarrierGR9MK82Action = ["SpawnHarrierGR9MK82","Harrier GR9 MK82","",{if(fjetSpawned == 1)exitWith{hint "Only 1 vehicle per life"};_veh = "CUP_B_GR9_MK82_GB" createVehicle (position jetSpawnPad);_veh setDir 45;fjetSpawned = 1;},{TRUE}] call ace_interact_menu_fnc_createAction;
["Land_InfoStand_V1_F", 0, ["ACE_MainActions"], SpawnHarrierGR9MK82Action] call ace_interact_menu_fnc_addActionToClass;