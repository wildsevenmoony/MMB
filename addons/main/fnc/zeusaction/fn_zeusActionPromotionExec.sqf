#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Creates and configures a curator module for the given player on the server.
 *
 * Arguments:
 * 0: Player receiving Zeus access <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_zeusActionPromotionExec
 *
 * Public: No
 */
params ["_player"];

if (!isServer || {isNull _player}) exitWith {};

[] call FUNC(zeusActionPromotionHandleDC);

private _existingCurator = getAssignedCuratorLogic _player;
if (!isNull _existingCurator) exitWith {
	_player setVariable [QVAR(zeusAction), true, true];
	_player setVariable [QVAR(promoZeusModule), nil, true];
	["You already have an assigned Zeus module.", 2, _player, 12] remoteExecCall ["ace_common_fnc_displayTextStructured", _player];
};

private _owner = ["#adminLogged", getPlayerUID _player] select isMultiplayer;
if (_owner isEqualTo "") exitWith {
	_player setVariable [QVAR(zeusAction), false, true];
	["Could not create Zeus: player UID is not available yet.", 2, _player, 12] remoteExecCall ["ace_common_fnc_displayTextStructured", _player];
};

private _previousZeus = _player getVariable [QVAR(promoZeusModule), objNull];
if (!isNull _previousZeus) then {
	unassignCurator _previousZeus;
	deleteVehicle _previousZeus;
};

private _group = createGroup [sideLogic, true];
private _zeus = _group createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "NONE"];
missionNamespace setVariable [format [QVAR(missionNamespaceCuratorModule%1), _owner], _zeus];

_zeus setVariable ["owner", _owner, true];
_zeus setVariable ["Addons", 3, true];
_zeus setVariable ["BIS_fnc_initModules_disableAutoActivation", false];

_zeus setCuratorCoef ["Place", 0];
_zeus setCuratorCoef ["Delete", 0];

_player assignCurator _zeus;
_zeus addCuratorEditableObjects [allUnits + vehicles, true];
_player setVariable [QVAR(promoZeusModule), _zeus, true];
_player setVariable [QVAR(zeusAction), true, true];
["You are Zeus now!", 2, _player, 12] remoteExecCall ["ace_common_fnc_displayTextStructured", _player];
