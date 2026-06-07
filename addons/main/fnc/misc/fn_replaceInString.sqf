#include "..\..\script_component.hpp"

/*
 * Author: IndeedPete, refined by Moony
 * Replaces every exact matching text fragment in a string.
 *
 * Arguments:
 * 0: Source string <STRING>
 * 1: Text to replace <STRING>
 * 2: Replacement text <STRING>
 *
 * Return Value:
 * String with the requested text replaced <STRING>
 *
 * Example:
 * ["turban_02", "02", "03"] call MMB_fnc_replaceInString
 *
 * Public: No
 */
params [
	["_string", "", [""]],
	["_replace", "", [""]],
	["_replaceWith", "", [""]]
];

if (_replace isEqualTo "") exitWith {_string};

private _out = "";
private _remaining = _string;
private _replaceLength = count _replace;
private _pos = _remaining find _replace;

while {_pos >= 0} do {
	_out = _out + (_remaining select [0, _pos]) + _replaceWith;
	_remaining = _remaining select [_pos + _replaceLength];
	_pos = _remaining find _replace;
};

_out + _remaining
