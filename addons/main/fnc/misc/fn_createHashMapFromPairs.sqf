#include "..\..\script_component.hpp"

/*
 * Author: IndeedPete, refined by Moony
 * Creates a hashmap from [key, value] pairs and ignores malformed entries.
 *
 * Arguments:
 * 0: Pairs <ARRAY>
 * 1: Lowercase string keys <BOOL, default: false>
 *
 * Return Value:
 * HashMap <HASHMAP>
 *
 * Example:
 * [[["name", "Alpha"], ["count", 2]]] call MMB_fnc_createHashMapFromPairs
 *
 * Public: Yes
 */

params [
	["_pairs", [], [[]]],
	["_lowercaseKeys", false, [false]]
];

private _map = createHashMap;

{
	if (_x isEqualType [] && {count _x >= 2}) then {
		private _key = _x select 0;
		if (_lowercaseKeys && {_key isEqualType ""}) then {
			_key = toLowerANSI _key;
		};
		_map set [_key, _x select 1];
	};
} forEach _pairs;

_map
