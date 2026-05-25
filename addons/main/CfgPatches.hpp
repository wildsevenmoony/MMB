/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions";
		author = "Moony";
		requiredAddons[] = {
			"A3_Modules_F_Curator",
			"ace_movement",
			"CBA_Main",
			"cba_ui"
		};
		requiredVersion = 1.32;
		units[] = {};
		weapons[] = {};
	};
};
