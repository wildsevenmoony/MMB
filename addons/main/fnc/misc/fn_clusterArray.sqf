#include "..\..\script_component.hpp"

/*
 * Author: IndeedPete, refined by Moony
 * Counts repeated values in an array while preserving first-seen order.
 *
 * Arguments:
 * 0: Source array <ARRAY>
 *
 * Return Value:
 * Array of [value, count] pairs <ARRAY>
 *
 * Example:
 * [["a", "b", "a"]] call MMB_fnc_clusterArray
 * // [["a", 2], ["b", 1]]
 *
 * Public: Yes
 */

params [
	["_array", [], [[]]]
];

private _seen = [];
private _clustered = [];

{
	private _element = _x;
	if !(_element in _seen) then {
		_seen pushBack _element;
		_clustered pushBack [_element, {_x isEqualTo _element} count _array];
	};
} forEach _array;

_clustered
