#include "script_component.hpp"

/*
 * Author: Moony
 * Runs client postInit setup for Zeus self-actions and ACE carry/drag limits.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call compile preprocessFileLineNumbers "\z\mma\addons\main\XEH_postInit.sqf"
 *
 * Public: No
 */

// Add Zeus Action
if (hasInterface) then {
	[player] call FUNC(zeusActionInitAdmin);
};

// ACE Fortify

/*["acex_fortify_objectPlaced", {

	params ["_unit", "_side", "_object"];

	_side = side _unit;
	_cost = _unit getVariable QVAR(fortificationCost);
	_time = _cost * 2;
	_array = [_object, _side, _cost];
	_fortifybox = [];
	
	[_unit, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;

	[
		_time,
		_array,
		{
			params ["_array"];

			_object = _array select 0;
			_side = _array select 1;
			_cost = _array select 2;

			[_player, "", 1] call ace_common_fnc_doAnimation;
			_player setVariable [QVAR(fortificationCost), nil];
			
			_object enableSimulationGlobal true;
			true;
		},
		{	
			params ["_array"];

			_object = _array select 0;
			_side = _array select 1;
			_cost = _array select 2;

			[_player, "", 2] call ace_common_fnc_doAnimation;
			_player setVariable [QVAR(fortificationCost), nil];
			deleteVehicle _object;

			[_side, _cost, false] call ace_fortify_fnc_updateBudget;
			false;
		},
		"Building Fortification"
	] call ace_common_fnc_progressBar;
}] call CBA_fnc_addEventHandler;

[{
    params ["_unit", "_object", "_cost"];

	_side = side _unit;

	_object enableSimulationGlobal false;
	_cost = _unit getVariable QVAR(fortificationCost);
	_time = _cost * 2;
	_array = [_object, _side, _cost];
	_fortifybox = [];

	{
		_fortifyBoxCheck = _x getVariable [QVAR(isfortifyBox), false];
		if (_fortifyBoxCheck) then {
			_fortifybox pushBack _x;
		};
	} forEach nearestObjects [_unit, [], 20];

	if (_fortifybox isEqualTo []) exitWith {
		["No fortify Box close-by", 2, _unit, 12] call ace_common_fnc_displayTextStructured;
		deleteVehicle _object;
		false;
	};
}] call ace_fortify_fnc_addDeployHandler;*/

// ACE Carry & Drag
ACE_maxWeightDrag = 1600;
ACE_maxWeightCarry = 1200;
