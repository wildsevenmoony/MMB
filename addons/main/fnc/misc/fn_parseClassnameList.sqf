#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Parses a comma-separated classname list from settings, modules, or dialogs.
 *
 * Arguments:
 * 0: Raw classnames <STRING>
 *
 * Return Value:
 * Parsed classnames, or [""] when input is empty <ARRAY>
 *
 * Public: Yes
 */

params [
	["_classNames", "", [""]]
];

if (_classNames isEqualTo "" || {_classNames isEqualTo "[]"}) exitWith {
	[""]
};

([_classNames] call CBA_fnc_removeWhitespace) splitString ","
