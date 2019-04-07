class 2000_USMC_Base: B_Soldier_base_F
{
scope=2;
displayName="Rifleman";
faction="twc_public_usmc";
editorSubcategory = "US_Men_2000";
vehicleClass="US_Men_2000";
icon="iconMan";
nakedUniform="U_BasicBody";
uniformClass="rhs_uniform_FROG01_wd";
twc_radioType = "ACRE_PRC148";
twc_radioChannel = 3;
backpack="TWC_Backpack_USMC2000_Rifleman";
linkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"rhsusf_lwh_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"rhsusf_lwh_helmet_marpatwd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
Items[]=
{
"ACE_fieldDressing",
"ACRE_PRC148",
"ACE_EarPlugs",

"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_quikclot",
"ACE_quikclot",
"ACE_morphine",
"ACE_epinephrine",
"ACE_tourniquet",
"ACE_tourniquet",
"ACE_MapTools"
};
respawnitems[]=
{
"ACE_fieldDressing",
"ACRE_PRC148",
"ACE_EarPlugs",

"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_fieldDressing",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_packingBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_elasticBandage",
"ACE_quikclot",
"ACE_quikclot",
"ACE_morphine",
"ACE_epinephrine",
"ACE_tourniquet",
"ACE_tourniquet",
"ACE_MapTools"
};
weapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
respawnweapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
magazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Base_d: 2000_USMC_Base
{
scope=2;
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"rhsusf_lwh_helmet_marpatd_ess",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Grenadier_M81",
"rhsusf_lwh_helmet_marpatd_ess",
"ItemMap",
"ItemCompass",
"ItemWatch"
};

};


class 2000_USMC_Squadleader: 2000_USMC_Base
{
scope=2;
displayName="Squad Leader@USMC Section";
icon="iconManLeader";
backpack="TWC_Backpack_USMC2000_Sectionleader";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_mich_helmet_marpatwd",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
weapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};
class 2000_USMC_Squadleader_d: 2000_USMC_Squadleader
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemMicroDAGR",
"ItemCompass",
"ItemWatch"
};
};

class 2000_USMC_Teamleader: 2000_USMC_Base
{
scope=2;
displayName="Team Leader";
icon="iconManLeader";
backpack="TWC_Backpack_USMC2000_Teamleader";
weapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"ACE_Yardage450",
"twc_CUP_arifle_M16A4_Grip_acog",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"1Rnd_HE_Grenade_shell",
"SmokeShell",
"SmokeShell"
};
};
class 2000_USMC_Teamleader_d: 2000_USMC_Teamleader
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_Grenadier: 2000_USMC_Base
{
scope=2;
displayName="Grenadier";
backpack="TWC_Backpack_USMC2000_Rifleman";
weapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_GL"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_GL"
};
magazines[]=
{
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"1Rnd_HE_Grenade_shell",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Grenadier_d: 2000_USMC_Grenadier
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_Breacher: 2000_USMC_Base
{
scope=2;
displayName="Breacher";
backpack="TWC_Backpack_USMC2000_Breacher";
weapons[]=
{
"Throw",
"Put",
"twc_m1014",
"rhsusf_weap_m1911a1"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_m1014",
"rhsusf_weap_m1911a1"
};
magazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_mag_7x45acp_MHP",
"rhsusf_mag_7x45acp_MHP",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_00Buck",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"rhsusf_8Rnd_Slug",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Breacher_d: 2000_USMC_Breacher
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_Autorifleman: 2000_USMC_Base
{
scope=2;
displayName="Autorifleman";
backpack="TWC_Backpack_USMC2000_Autorifleman";
weapons[]=
{
"Throw",
"Put",
"rhs_weap_m249"
};
respawnweapons[]=
{
"Throw",
"Put",
"rhs_weap_m249"
};
magazines[]=
{
"rhsusf_200rnd_556x45_mixed_box",
"rhsusf_200rnd_556x45_mixed_box",
"rhsusf_200rnd_556x45_mixed_box",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"rhsusf_200rnd_556x45_mixed_box",
"rhsusf_200rnd_556x45_mixed_box",
"rhsusf_200rnd_556x45_mixed_box",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Autorifleman_d: 2000_USMC_Autorifleman
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};
class 2000_USMC_AsstAutorifleman: 2000_USMC_Base
{
scope=2;
displayName="Asst. Automatic Rifleman";
icon="iconManMG";
backpack="TWC_Backpack_USMC2000_Autorifleman";
weapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
respawnweapons[]=
{
"Throw",
"Put",
"CUP_TWC_arifle_M16A4_Grip_clean"
};
magazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"HandGrenade",
"HandGrenade",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_AsstAutorifleman_d: 2000_USMC_AsstAutorifleman
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};

class 2000_USMC_Medic: 2000_USMC_Base
{
scope=2;
displayName="Corpsman";
icon="iconManMedic";
backpack="TWC_Backpack_USMC2000_Medic";
attendant = 1;

magazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"SmokeShell",
"SmokeShell"
};
};

class 2000_USMC_Medic_d: 2000_USMC_Medic
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};

class 2000_USMC_Marksman: 2000_USMC_Base
{
scope=2;
displayName="Marksman";

magazines[]=
{
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"SmokeShell",
"SmokeShell"
};
Respawnmagazines[]=
{
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"CUP_30Rnd_556x45_Stanag_Tracer_Red",
"SmokeShell",
"SmokeShell"
};
weapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_Grip_acog_sdmr"
};
respawnweapons[]=
{
"Throw",
"Put",
"twc_CUP_arifle_M16A4_Grip_acog_sdmr"
};
};
class 2000_USMC_Marksman_d: 2000_USMC_Marksman
{
uniformClass="rhs_uniform_FROG01_d";
linkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
respawnLinkedItems[]=
{
"CUP_V_B_Interceptor_Rifleman_M81",
"rhsusf_lwh_helmet_marpatd",
"ItemMap",
"ItemCompass",
"ItemWatch"
};
};


