#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Checks whether a unit has a house object directly above them.
 *
 * Arguments:
 * 0: Unit to check <OBJECT>
 *
 * Return Value:
 * True if the unit is inside or under a house, otherwise false <BOOL>
 *
 * Example:
 * [player] call MMA_fnc_inHouse
 *
 * Public: No
 */
params ["_caller"];

lineIntersectsSurfaces [
  getPosWorld _caller,
  getPosWorld _caller vectorAdd [0, 0, 50],
  _caller, objNull, true, 1, "GEOM", "NONE"
] select 0 params ["","","","_house"];
if (isNil "_house") exitWith {false};
if (_house isKindOf "House") exitWith {true};

false
