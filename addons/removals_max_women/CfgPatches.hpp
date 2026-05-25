/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions (Removals Max Women)";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui",
			"mma_additions_max_women",
			"Max_Tak_woman", // Max_Women
			"women" // Max_Women
		};
		requiredVersion = 1.32;
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
