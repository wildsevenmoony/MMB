#include "..\..\script_component.hpp"

/*
 * Author: Moony
 * Adds the disconnect cleanup handler for temporary curator modules.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call MMA_fnc_zeusActionPromotionHandleDC
 *
 * Public: No
 */
private _varCheck = missionNamespace getVariable [QVAR(missionNamespaceCuratorModule_DC), false];

if !(_varCheck) then {
    missionNamespace setVariable [QVAR(missionNamespaceCuratorModule_DC), true];

    private _ID = addMissionEventHandler ["HandleDisconnect", {
        params ["_unit", "_id", "_uid", "_name"];

        private _zeusVarName = format [QVAR(missionNamespaceCuratorModule%1), _uid];
        private _zeus = missionNamespace getVariable _zeusVarName;

        if (!isNil "_zeus") then {
            if (!isNull _zeus) then {
                private _group = group _zeus;

                unassignCurator _zeus;
                deleteVehicle _zeus;
                _group deleteGroupWhenEmpty true;
            };
            missionNamespace setVariable [_zeusVarName, nil];
        };
    }];
    missionNamespace setVariable [QVAR(missionNamespaceCuratorModuleDCID), _ID];
};
