#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Replaces the first matching text fragment in a string.
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
params ["_string","_replace","_replaceWith"]; 


private _pos = (_string find _replace); 

if (_pos isEqualTo -1) exitWith { 
	_string; 
}; 

if (_pos isEqualTo 0) exitWith { 
	[_replaceWith,((_string splitString _replace) joinString _replaceWith)] joinString ""; 
};

(_string splitString _replace) joinString _replaceWith;
