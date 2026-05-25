/*
 * Author: Moony
 * Registers CBA extended preInit and postInit handlers for the additions addon.
 */

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\z\mma\addons\additions\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\z\mma\addons\additions\XEH_postInit.sqf'";
    };
};
