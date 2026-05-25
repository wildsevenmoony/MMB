/*
 * Author: Moony
 * Adds Max_Women to Vanilla factions
 */

class CfgVehicles
{
	// Max_Women
    class Max_woman4; 
    class Max_woman2; 
    class Max_woman3; 
    class Max_woman1;

    // Adding Max_Women to Factions
        class GVAR(Max_woman1_altis) : Max_woman1 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CIV_F";
            side = 3;
        };
        class GVAR(Max_woman2_altis) : Max_woman2 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CIV_F";
            side = 3;
        };
        class GVAR(Max_woman3_altis) : Max_woman3 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CIV_F";
            side = 3;
        };
        class GVAR(Max_woman4_altis) : Max_woman4 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CIV_F";
            side = 3;
        };
};
