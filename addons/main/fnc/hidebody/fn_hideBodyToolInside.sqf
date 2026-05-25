#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Deletes a body indoors or above ground after a progress action with an entrenching tool.
 *
 * Arguments:
 * 0: Player hiding the body <OBJECT>
 * 1: Body to hide <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorTarget] call MMA_fnc_hideBodyToolInside
 *
 * Public: No
 */
params ["_player", "_target"];

[_player, _target, 10, "deleteVehicle", "Hiding Body...somewhere", false] call FUNC(hideBodyProgress);
