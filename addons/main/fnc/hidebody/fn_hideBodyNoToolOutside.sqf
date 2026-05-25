#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Buries a body outside without an entrenching tool after a longer progress action.
 *
 * Arguments:
 * 0: Player hiding the body <OBJECT>
 * 1: Body to hide <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorTarget] call MMA_fnc_hideBodyNoToolOutside
 *
 * Public: No
 */
params ["_player", "_target"];

[_player, _target, 30, "hideBody", "Bury body with your Hands", true] call FUNC(hideBodyProgress);
