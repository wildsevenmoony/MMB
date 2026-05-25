#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Switches the player's turban headgear variant from the raised to lowered version.
 *
 * Arguments:
 * 0: Player whose headgear should be changed <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call MMA_fnc_turbanDown
 *
 * Public: No
 */
params ["_player"];

private _headgearOld = headgear _player;
private _headgearNew = [_headgearOld, "03", "02"] call FUNC(replaceInString);

removeHeadgear _player;
_player addHeadgear _headgearNew;
