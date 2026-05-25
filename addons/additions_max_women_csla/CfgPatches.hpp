/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions (Max Women/CSLA)";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui",
			"CSLA_CIV", // csla
			"Max_Tak_woman", // Max_Women
			"women" // Max_Women
		};
		requiredVersion = 1.32;
		units[] = {
			QGVAR(Max_woman1_csla),
			QGVAR(Max_woman2_csla),
			QGVAR(Max_woman3_csla),
			QGVAR(Max_woman4_csla)
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
