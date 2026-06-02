/*
 * Author: Moony
 * Defines the main component name and imports shared MMB script macros.
 */

#define COMPONENT main
#define COMPONENT_BEAUTIFIED Main

#include "script_mod.hpp"
#include "script_macros.hpp"

#ifndef GUI_GRID_X
	#define GUI_GRID_WAbs ((safeZoneW / safeZoneH) min 1.2)
	#define GUI_GRID_HAbs (GUI_GRID_WAbs / 1.2)
	#define GUI_GRID_W (GUI_GRID_WAbs / 40)
	#define GUI_GRID_H (GUI_GRID_HAbs / 25)
	#define GUI_GRID_X (safeZoneX)
	#define GUI_GRID_Y (safeZoneY + safeZoneH - GUI_GRID_HAbs)
#endif

#include "\z\mmb\addons\main\ui\defineResinclDesign.inc"
