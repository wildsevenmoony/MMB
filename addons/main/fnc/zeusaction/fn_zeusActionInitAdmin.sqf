#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Marks configured admin UIDs as eligible to use the Zeus self action.
 *
 * Arguments:
 * 0: Player to check for Zeus action eligibility <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_zeusActionInitAdmin
 *
 * Public: No
 */
params ["_player"];

private _zeusActionEligible = _player getVariable [QVAR(zeusActionEligible), false];

// Jeromer, Killerfish, M.Hansen, Moony, Thom, and the player themselves
private _zeusAdmin = [
  "76561198071715471",
	"76561197980877311",
	"76561197971387924",
	"76561198063419944",
	"76561198042354590",
  "_SP_PLAYER_"
]; 
private _playerUID = getPlayerUID _player;
private _isZeusAdmin = _playerUID in _zeusAdmin;

if (_zeusActionEligible) exitWith {};

if (_isZeusAdmin) then {
  _player setVariable [QVAR(zeusActionEligible), true, true];
};
