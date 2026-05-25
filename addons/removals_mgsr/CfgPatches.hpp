/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions (Removals MGSR)";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui",
			"mma_additions",
			"mgsr_dejavu", // MGSR
			"mgsr_units" // MGSR
		};
		requiredVersion = 1.32;
		units[] = {};
		weapons[] = {};
		skipWhenMissingDependencies = 1;
	};
};
