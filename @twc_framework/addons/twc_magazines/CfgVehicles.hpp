class CfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_RepackMagazines {
				displayName = "$STR_ACE_MagazineRepack_RepackMagazines";
				condition = "true";
				exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
				insertChildren = "[_this] call twc_magazines_fnc_getMagazineChildren";
				priority = -2;
				icon = "\twc_magazines\UI\repack_ca.paa";
			};
		};
	};
};