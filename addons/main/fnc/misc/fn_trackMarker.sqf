#include "..\..\script_component.hpp"

/*
 * Author: IndeedPete, refined by Moony
 * Creates a marker that follows an object or a group's leader.
 *
 * Arguments:
 * 0: Target object <OBJECT>
 * 1: Marker id <STRING, default: auto>
 * 2: Update delay <NUMBER, default: 5>
 * 3: Marker type <STRING, default: "mil_dot">
 * 4: Marker color <STRING, default: side color>
 * 5: Marker text <STRING or BOOL, default: false>
 *    If true, marker text updates to the alive group member count.
 * 6: Delete marker when target group is dead <BOOL, default: false>
 * 7: Condition <CODE, default: {true}>
 *
 * Return Value:
 * Marker id <STRING>
 *
 * Public: Yes
 */

params [
	["_target", objNull, [objNull]],
	["_markerId", "", [""]],
	["_delay", 5, [0]],
	["_type", "mil_dot", [""]],
	["_color", "", [""]],
	["_text", false, ["", false]],
	["_deleteWhenDead", false, [false]],
	["_condition", {true}, [{}]]
];

if (isNull _target) exitWith {""};
if !(call _condition) exitWith {""};

private _group = group _target;
private _marker = if (_markerId isEqualTo "") then {
	format ["mmb_track_%1_%2", netId _target, diag_tickTime]
} else {
	_markerId
};

if (_color isEqualTo "") then {
	_color = [(side _target), true] call BIS_fnc_sideColor;
};

private _isCountText = _text isEqualType false;
createMarker [_marker, getPos _target];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal _type;
_marker setMarkerColor _color;
if (!_isCountText) then {
	_marker setMarkerText _text;
};

[_marker, _target, _group, _delay max 0.1, _isCountText, _deleteWhenDead] spawn {
	params ["_marker", "_target", "_group", "_delay", "_isCountText", "_deleteWhenDead"];

	while {
		!isNull _target
		&& {{alive _x} count units _group > 0}
	} do {
		private _leader = leader _group;
		if (!isNull _leader) then {
			_marker setMarkerPos getPos _leader;
		};
		if (_isCountText) then {
			_marker setMarkerText str ({alive _x} count units _group);
		};
		sleep _delay;
	};

	if (_deleteWhenDead) then {
		deleteMarker _marker;
	} else {
		_marker setMarkerColor "ColorBlack";
		if (_isCountText) then {
			_marker setMarkerText "";
		};
	};
};

_marker
