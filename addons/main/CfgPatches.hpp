/*
 * Author: Moony
 * Declares the main MMB addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moony's Magnificent Base";
		author = "Moony";
		requiredAddons[] = {
			"A3_Modules_F_Curator",
			"ace_movement",
			"CBA_Main",
			"cba_settings",
			"cba_ui"
		};
		requiredVersion = 2.02;
		units[] = {};
		weapons[] = {};
	};
};
