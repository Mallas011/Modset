comment "Exported from Arsenal by jayman";

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "CUP_U_B_USMC_MARPAT_WDL_TwoKneepads";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACRE_PRC148";
player addVest "CUP_V_B_MTV_noCB";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
player addBackpack "CUP_B_USPack_Coyote";
for "_i" from 1 to 4 do {player addItemToBackpack "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";};
player addHeadgear "CUP_H_USMC_Headset_HelmetWDL";

comment "Add weapons";
player addWeapon "CUP_lmg_M249_E2";
player addPrimaryWeaponItem "CUP_optic_ElcanM145";
player addWeapon "CUP_launch_M136";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemRadioAcreFlagged";
player linkItem "CUP_NVG_PVS7";