/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions (Max Women)";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui",
			"Max_Tak_woman", // Max_Women
			"women" // Max_Women
		};
		requiredVersion = 1.32;
		units[] = {
			QGVAR(Max_woman1_altis),
			QGVAR(Max_woman2_altis),
			QGVAR(Max_woman3_altis),
			QGVAR(Max_woman4_altis)
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
