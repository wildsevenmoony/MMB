#include "script_component.hpp"

/*
 * Author: Moony
 * Registers CBA settings for the main addon.
 *
 * Public: No
 */

if (isNil "cba_settings_fnc_init") exitWith {};

[QGVAR(debugLogging), "CHECKBOX",
	["Debug logging", "Writes useful MMB events to the RPT log."],
	["Moony's Magnificent Base", "00 Debug"],
	false, 1
] call cba_settings_fnc_init;

[QGVAR(aceMaxWeightDrag), "SLIDER",
	["ACE max drag weight", "Maximum ACE drag weight used by MMB."],
	["Moony's Magnificent Base", "ACE Movement"],
	[0, 5000, 1600, 0], 1, {
		ACE_maxWeightDrag = _this;
	}
] call cba_settings_fnc_init;

[QGVAR(aceMaxWeightCarry), "SLIDER",
	["ACE max carry weight", "Maximum ACE carry weight used by MMB."],
	["Moony's Magnificent Base", "ACE Movement"],
	[0, 5000, 1200, 0], 1, {
		ACE_maxWeightCarry = _this;
	}
] call cba_settings_fnc_init;
