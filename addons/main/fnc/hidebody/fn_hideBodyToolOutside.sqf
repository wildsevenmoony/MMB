#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Buries a body outside with an entrenching tool after a short progress action.
 *
 * Arguments:
 * 0: Player hiding the body <OBJECT>
 * 1: Body to hide <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorTarget] call MMA_fnc_hideBodyToolOutside
 *
 * Public: No
 */
params ["_player", "_target"];

[_player, _target, 5, "hideBody", "Bury body", true] call FUNC(hideBodyProgress);
