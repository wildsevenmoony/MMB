#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Switches the player's turban headgear variant from the lowered to raised version.
 *
 * Arguments:
 * 0: Player whose headgear should be changed <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_turbanUp
 *
 * Public: No
 */
params ["_player"];

private _headgearOld = headgear _player;
private _headgearNew = [_headgearOld, "02", "03"] call FUNC(replaceInString);

removeHeadgear _player;
_player addHeadgear _headgearNew;
