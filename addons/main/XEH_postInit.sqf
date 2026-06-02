#include "script_component.hpp"

/*
 * Author: Moony
 * Runs core postInit setup for ACE carry/drag limits.
 *
 * Public: No
 */

ACE_maxWeightDrag = missionNamespace getVariable [QGVAR(aceMaxWeightDrag), 1600];
ACE_maxWeightCarry = missionNamespace getVariable [QGVAR(aceMaxWeightCarry), 1200];

if (missionNamespace getVariable [QGVAR(debugLogging), false]) then {
	diag_log format ["[%1] ACE drag/carry weights set to %2/%3", QADDON, ACE_maxWeightDrag, ACE_maxWeightCarry];
};
