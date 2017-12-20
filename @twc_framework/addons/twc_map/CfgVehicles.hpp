class CfgVehicles {
	class Man;

	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class R_Unfold_UnfoldMap {
					displayName = "Unfold Map";
					condition = """ItemMap"" in (assignedItems player)";
					statement = "[_player] spawn TWC_Map_fnc_unfoldMap";
					icon = "A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa";
				};
			};
		};
	};

	class Items_Base_F;
	class Land_Map_blank_F: Items_Base_F {
		class EventHandlers {
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers{};
		};

		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 2;
				condition = "true";

				class TWC_Map_OpenMap {
					displayName = "Open Map";
					distance = 2;
					condition = "true";
					statement = "[_target] call TWC_Map_fnc_openMap";
					icon = "A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\map_ca.paa";
				};

				class TWC_Map_PickupMap {
					displayName = "Pickup Map";
					distance = 2;
					condition = "!(""ItemMap"" in (assignedItems _player))";
					statement = "[_target, _player] call TWC_Map_fnc_pickupMap";
					icon = "A3\Ui_f\data\MAP\Markers\Military\pickup_ca.paa";
				};
			};
		};
	};
};