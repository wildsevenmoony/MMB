#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Deletes the temporary curator module assigned to the given player.
 *
 * Arguments:
 * 0: Player losing Zeus access <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_zeusActionDemotionExec
 *
 * Public: No
 */
params ["_player"];

if (!isServer || {isNull _player}) exitWith {};

private _zeusAssigned = _player getVariable [QVAR(promoZeusModule), objNull];
if (!isNull _zeusAssigned) then {
	private _group = group _zeusAssigned;
	private _owner = ["#adminLogged", getPlayerUID _player] select isMultiplayer;

	unassignCurator _zeusAssigned;
	deleteVehicle _zeusAssigned;
	_group deleteGroupWhenEmpty true;
	missionNamespace setVariable [format [QVAR(missionNamespaceCuratorModule%1), _owner], nil];
};

_player setVariable [QVAR(promoZeusModule), nil, true];
_player setVariable [QVAR(zeusAction), false, true];
