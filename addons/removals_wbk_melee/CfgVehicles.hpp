/*
 * Author: Moony
 * Removes several Units from several factions
 */

class CfgVehicles
{
    // Bases
        class B_Soldier_base_F;
        class O_Soldier_base_F;
        class C_man_1;
        class C_man_p_fugitive_F;
        class B_GEN_Soldier_F;
        class B_GEN_Commander_F;
        class B_diver_F;
        class B_soldier_AR_F;
        class B_Soldier_F;
        class B_Helipilot_F;
        class B_officer_F;
        class B_Officer_Parade_F;
        class B_T_Soldier_AR_F;
        class B_T_Soldier_F;
        class B_T_Officer_F;
        class O_T_Soldier_AR_F;
        class O_T_Soldier_F;
        class O_T_Officer_F;
        class O_T_Soldier_SL_F;
        class O_diver_F;
        class O_Soldier_AR_F;
        class O_Soldier_F;
        class O_Soldier_lite_F;
        class O_helipilot_F;
        class O_officer_F;
        class O_Officer_Parade_F;
        class O_Soldier_SL_F;
        class I_Soldier_AR_F;
        class I_soldier_F;
        class I_helipilot_F;
        class I_officer_F;
        class I_Officer_Parade_F;

    // Removing Max_Women from Altis Civi Faction
        class Max_Tak_woman1 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak_woman2 : Max_Tak_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak_woman3 : Max_Tak_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak_woman4 : Max_Tak_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak_woman5 : Max_Tak_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak_woman6 : Max_Tak_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Taky_woman1 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Taky_woman2 : Max_Taky_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Taky_woman3 : Max_Taky_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Taky_woman4 : Max_Taky_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Taky_woman5 : Max_Taky_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak2_woman1 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak2_woman2 : Max_Tak2_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak2_woman3 : Max_Tak2_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak2_woman4 : Max_Tak2_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_Tak2_woman5 : Max_Tak2_woman1 {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman1 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman2 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman3 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman4 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman5 : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };

    // Removing Max_Women Soldier from Altis Civi Faction
        class Max_woman_soldier1 : B_T_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman_soldier2 : B_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman_soldier3 : B_Helipilot_F {
            scope = 1;
            scopeCurator = 0;
        };
        class Max_woman_soldier4 : B_officer_F {
            scope = 1;
            scopeCurator = 0;
        };
        
        class WB_GEN_Soldier_F : B_GEN_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_GEN_Commander_F : B_GEN_Commander_F {
            scope = 1;
            scopeCurator = 0;
        };

        class WB_diver_F : B_diver_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_diver2_F : B_diver_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_soldier_AR_F : B_soldier_AR_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_Soldier_F : B_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_Helipilot_F : B_Helipilot_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_officer_F : B_officer_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_Officer_Parade_F : B_Officer_Parade_F {
            scope = 1;
            scopeCurator = 0;
        };
        
        class WB_T_Soldier_AR_F : B_T_Soldier_AR_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_T_Soldier_F : B_T_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WB_T_officer_F : B_T_Officer_F {
            scope = 1;
            scopeCurator = 0;
        };

        class WO_T_Soldier_AR_F : O_T_Soldier_AR_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_T_Soldier_F : O_T_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_T_Officer_F : O_T_Officer_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_T_Soldier_SL_F : O_T_Soldier_SL_F {
            scope = 1;
            scopeCurator = 0;
        };

        class WO_diver_F : O_diver_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_Soldier_AR_F : O_Soldier_AR_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_Soldier_F : O_Soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_Soldier_lite_F : O_Soldier_lite_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_helipilot_F : O_helipilot_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_officer_F : O_officer_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_Officer_Parade_F : O_Officer_Parade_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WO_Soldier_SL_F : O_Soldier_SL_F {
            scope = 1;
            scopeCurator = 0;
        };

        class WI_Soldier_AR_F : I_Soldier_AR_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WI_soldier_F : I_soldier_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WI_helipilot_F : I_helipilot_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WI_officer_F : I_officer_F {
            scope = 1;
            scopeCurator = 0;
        };
        class WI_Officer_Parade_F : I_Officer_Parade_F {
            scope = 1;
            scopeCurator = 0;
        };

        class max_female_b : C_man_p_fugitive_F {
            scope = 1;
            scopeCurator = 0;
        };

    // Removing MGSR from Altis Civi Faction
        class mgsr_prisoner : C_man_1 {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_blue : mgsr_prisoner {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_olive : mgsr_prisoner {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_dirty : mgsr_prisoner {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_muddy : mgsr_prisoner {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_blue_dirty : mgsr_prisoner_blue {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_blue_muddy : mgsr_prisoner_blue {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_olive_dirty : mgsr_prisoner_olive {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_prisoner_olive_muddy : mgsr_prisoner_olive {
            scope = 1;
            scopeCurator = 0;
        };
        class mgsr_solid_snake_ps1 : C_man_1 {
            scope = 1;
            scopeCurator = 0;
        };

    // Removing Webknight Meele Faction
		class O_soldier_Melee_Hybrid: B_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class B_soldier_Melee_Hybrid: B_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class B_soldier_Melee: B_Soldier_base_F	{
			scope = 1;
			scopeCurator = 1;
		};
		class B_soldier_Melee_RUSH: B_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class O_soldier_Melee: O_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class O_soldier_Melee_RUSH: O_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class O_soldier_STEALTH: O_Soldier_base_F{
			scope = 1;
			scopeCurator = 1;
		};
		class B_soldier_STEALTH: B_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class B_soldier_Melee_fists: B_Soldier_base_F{
			scope = 1;
			scopeCurator = 1;
		};
		class B_soldier_Melee_RUSH_fists: B_Soldier_base_F {
			scope = 1;
			scopeCurator = 1;
		};
		class O_soldier_Melee_fists: O_Soldier_base_F{
			scope = 1;
			scopeCurator = 1;
		};
		class O_soldier_Melee_RUSH_fists: O_Soldier_base_F{
			scope = 1;
			scopeCurator = 1;
		};
};
