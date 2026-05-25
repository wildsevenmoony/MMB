#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Demotes a temporary Zeus player and requests removal of their curator module.
 *
 * Arguments:
 * 0: Player losing Zeus access <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_zeusActionDemotion
 *
 * Public: No
 */
params ["_player"];

_player setVariable [QVAR(zeusAction), false, true];

// Remove Zeus on the server.
[_player] remoteExecCall [QFUNC(zeusActionDemotionExec), 2];

["You are no longer Zeus!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
