#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Selects the correct hide-body action based on location and entrenching tool availability.
 *
 * Arguments:
 * 0: Player hiding the body <OBJECT>
 * 1: Body to hide <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorTarget] call MMA_fnc_hideBodyAction
 *
 * Public: No
 */
params ["_player", "_target"];

// Checking target variable
if (_target getVariable [QVAR(hideBodyActive), false]) exitWith {
  ["Someone is already taking care of this Body!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
};

// Setting the variable
_target setVariable [QVAR(hideBodyActive), true, true];

private _hasEntrenchingTool = "ACE_EntrenchingTool" in (vestItems _player + uniformItems _player + backpackItems _player + assignedItems _player);
private _isInside = (_player call FUNC(inHouse)) || {((getPosATL _player) select 2) > 0.1};
private _function = switch (true) do {
  case (_isInside && _hasEntrenchingTool): {FUNC(hideBodyToolInside)};
  case (_isInside): {FUNC(hideBodyNoToolInside)};
  case (_hasEntrenchingTool): {FUNC(hideBodyToolOutside)};
  default {FUNC(hideBodyNoToolOutside)};
};

[_player, _target] call _function;
