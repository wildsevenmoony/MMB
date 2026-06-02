/*
 * Author: Moony
 * Registers CBA extended preInit and postInit handlers for the main addon.
 */

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\z\mmb\addons\main\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = "call compile preprocessFileLineNumbers '\z\mmb\addons\main\XEH_postInit.sqf'";
    };
};
