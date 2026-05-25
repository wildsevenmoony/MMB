/*
 * Author: Moony
 * Adds Max_Women to csla factions
 */

class CfgVehicles
{
	// Max_Women
    class Max_woman4; 
    class Max_woman2; 
    class Max_woman3; 
    class Max_woman1;

    // Adding Max_Women to Factions
        class GVAR(Max_woman1_csla) : Max_woman1 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CSLA_CIV";
            side = 3;
        };
        class GVAR(Max_woman2_csla) : Max_woman2 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CSLA_CIV";
            side = 3;
        };
        class GVAR(Max_woman3_csla) : Max_woman3 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CSLA_CIV";
            side = 3;
        };
        class GVAR(Max_woman4_csla) : Max_woman4 {
            author = "MaxJoiner";
            scope = 2;
            scopeCurator = 2;
            faction = "CSLA_CIV";
            side = 3;
        };
};
