#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Promotes a player to temporary Zeus and starts the curator disconnect cleanup.
 *
 * Arguments:
 * 0: Player receiving Zeus access <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_zeusActionPromotion
 *
 * Public: No
 */
params ["_player"];

if (
	!(_player getVariable [QVAR(zeusActionEligible), false])
	&& {!(serverCommandAvailable "#logout")}
	&& {isMultiplayer}
) exitWith {
	["You are not eligible to become Zeus!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
};

_player setVariable [QVAR(zeusAction), true, true];

// Add Zeus on the server. The server function explicitly assigns the curator.
[_player] remoteExecCall [QFUNC(zeusActionPromotionExec), 2];

