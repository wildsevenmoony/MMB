/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions (Max Women/RDS)";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui",
			"rds_a2port_cman", // RDS
			"Max_Tak_woman", // Max_Women
			"women" // Max_Women
		};
		requiredVersion = 1.32;
		units[] = {
			QGVAR(Max_woman1_ru),
			QGVAR(Max_woman2_ru),
			QGVAR(Max_woman3_ru),
			QGVAR(Max_woman4_ru),
			QGVAR(Max_woman1_po),
			QGVAR(Max_woman2_po),
			QGVAR(Max_woman3_po),
			QGVAR(Max_woman4_po)
		};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
