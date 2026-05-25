/*
 * Author: Moony
 * Declares the main MMA addon patch, dependencies, and metadata.
 */

class CfgPatches {
	class ADDON {
		name = "Moonys Magnificent Additions";
		author = "Moony";
		requiredAddons[] = {
			"ace_movement",
			"CBA_Main",
			"cba_ui"
		};
		requiredVersion = 1.32;
		units[] = {
			QGVAR(B_Messenger_Black_F),
			QGVAR(B_Messenger_Coyote_F),
			QGVAR(B_Messenger_Gray_F),
			QGVAR(B_Messenger_Olive_F),
			QGVAR(B_Messenger_Purple_Moony_F)
		};
		weapons[] = {};
	};
};
