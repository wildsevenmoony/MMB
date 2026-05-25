#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Runs the shared hide-body progress action and cleanup.
 *
 * Arguments:
 * 0: Player hiding the body <OBJECT>
 * 1: Body to hide <OBJECT>
 * 2: Progress duration in seconds <NUMBER>
 * 3: Completion command to run on the target <STRING>
 * 4: Progress text <STRING>
 * 5: Play digging sound <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorTarget, 5, "hideBody", "Bury body", true] call MMA_fnc_hideBodyProgress
 *
 * Public: No
 */
params [
	["_player", objNull, [objNull]],
	["_target", objNull, [objNull]],
	["_duration", 5, [0]],
	["_finishCommand", "hideBody", [""]],
	["_text", "Hiding Body", [""]],
	["_playDiggingSound", false, [false]]
];

if (_playDiggingSound) then {
	playSound3D [PATHTOF(snd\digging.ogg), _player];
};

_player setVariable [QVAR(hideBodyAnimationActive), true];

[_player] spawn {
	params ["_player"];

	while {_player getVariable [QVAR(hideBodyAnimationActive), false]} do {
		[_player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;
		uiSleep 2;
	};
};

[
	_duration,
	[_player, _target, _finishCommand],
	{
		params ["_args"];
		_args params ["_player", "_target", "_finishCommand"];

		[_target] remoteExec [_finishCommand, 0, true];
		_player setVariable [QVAR(hideBodyAnimationActive), false];
		[_player, "", 1] call ace_common_fnc_doAnimation;
		_target setVariable [QVAR(hideBodyActive), false, true];
	},
	{
		params ["_args"];
		_args params ["_player", "_target"];

		_player setVariable [QVAR(hideBodyAnimationActive), false];
		_target setVariable [QVAR(hideBodyActive), false, true];
		[_player, "", 2] call ace_common_fnc_doAnimation;
	},
	_text
] call ace_common_fnc_progressBar;
