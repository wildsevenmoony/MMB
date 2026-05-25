/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions (Max Women/Aegis)";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui",
			"A3_Aegis_Characters_F_Aegis", // Aegis
			"Max_Tak_woman", // Max_Women
			"women" // Max_Women
		};
		requiredVersion = 1.32;
		units[] = {
			QGVAR(Max_Tak_woman1_argana),
			QGVAR(Max_Tak_woman2_argana),
			QGVAR(Max_Tak_woman3_argana),
			QGVAR(Max_Tak_woman4_argana),
			QGVAR(Max_Tak_woman5_argana),
			QGVAR(Max_Tak_woman6_argana),
			QGVAR(Max_Taky_woman1_argana),
			QGVAR(Max_Taky_woman2_argana),
			QGVAR(Max_Taky_woman3_argana),
			QGVAR(Max_Taky_woman4_argana),
			QGVAR(Max_Taky_woman5_argana),
			QGVAR(Max_Tak2_woman1_argana),
			QGVAR(Max_Tak2_woman2_argana),
			QGVAR(Max_Tak2_woman3_argana),
			QGVAR(Max_Tak2_woman4_argana),
			QGVAR(Max_Tak2_woman5_argana),
			QGVAR(Max_woman1_livonia),
			QGVAR(Max_woman2_livonia),
			QGVAR(Max_woman3_livonia),
			QGVAR(Max_woman4_livonia),
			QGVAR(Max_woman1_malden),
			QGVAR(Max_woman2_malden),
			QGVAR(Max_woman3_malden),
			QGVAR(Max_woman4_malden)
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
