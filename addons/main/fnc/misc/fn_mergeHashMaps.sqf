#include "..\..\script_component.hpp"

/*
 * Author: IndeedPete, refined by Moony
 * Merges hashmaps from left to right. Later maps overwrite earlier values.
 *
 * Arguments:
 * 0: Hashmaps <ARRAY>
 *
 * Return Value:
 * Merged HashMap <HASHMAP>
 *
 * Example:
 * [[_defaults, _override]] call MMB_fnc_mergeHashMaps
 *
 * Public: Yes
 */

params [
	["_maps", [], [[]]]
];

private _merged = createHashMap;

{
	if (_x isEqualType createHashMap) then {
		{
			_merged set [_x, _y];
		} forEach _x;
	};
} forEach _maps;

_merged
