/*
 * Author: Moony
 * Adds Max_Women to several factions
 */

class CfgVehicles
{
	// Max_Women
    class Max_woman4; 
    class Max_woman2; 
    class Max_woman3; 
    class Max_woman1;

    // Adding Max_Women to Factions
        class GVAR(Max_woman1_ru) : Max_woman1 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_rus_civ";
            side = 3;
        };
        class GVAR(Max_woman2_ru) : Max_woman2 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_rus_civ";
            side = 3;
        };
        class GVAR(Max_woman3_ru) : Max_woman3 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_rus_civ";
            side = 3;
        };
        class GVAR(Max_woman4_ru) : Max_woman4 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_rus_civ";
            side = 3;
        };

        class GVAR(Max_woman1_po) : Max_woman1 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_pol_civ";
            side = 3;
        };
        class GVAR(Max_woman2_po) : Max_woman2 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_pol_civ";
            side = 3;
        };
        class GVAR(Max_woman3_po) : Max_woman3 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_pol_civ";
            side = 3;
        };
        class GVAR(Max_woman4_po) : Max_woman4 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "rds_pol_civ";
            side = 3;
        };
};
