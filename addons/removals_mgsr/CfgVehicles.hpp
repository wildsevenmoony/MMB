/*
 * Author: Moony
 * Removes several Units from several factions
 */

class CfgVehicles
{
    // Bases
        class C_man_1;

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
};
