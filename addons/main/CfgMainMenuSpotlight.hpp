/*
 * Author: Moony
 * Adds the STAF main-server spotlight and hides selected vanilla/CDLC spotlights.
 */

class CfgMainMenuSpotlight {
	/*class STAF_Join_Training_Server {
		text = "Quick Join Training Server";
		textIsQuote = 0;
		picture = PATHTOF(icon\STAF_logo_256.paa);
		action = "connectToServer ['79.161.231.106', 2313, 'kalinka']";
		actionText = "Direct Connect to Training Server";
		condition = "true";
	};*/
	class STAF_Join_Main_Server {
		text = "Quick Join Main Server";
		textIsQuote = 0;
		picture = PATHTOF(icon\STAF_logo_256.paa);
		action = "connectToServer ['79.161.231.106', 2302, 'kalinka']";
		actionText = "Direct Connect to Main Server";
		condition = "true";
	};

	//Thanks Anthrax
	class Bootcamp {
		condition = "false";
	};

    class EastWind {
		condition = "false";
	};

    class ApexProtocol {
		condition = "false";
	};

    class Orange_Campaign {
		condition = "false";
	};

    class Orange_CampaignGerman {
		condition = "false";
	};

    class Orange_Showcase_IDAP {
		condition = "false";
	};

    class Orange_Showcase_LoW {
		condition = "false";
	};

    class Tacops_Campaign_01 {
		condition = "false";
	};
    
    class Tacops_Campaign_02 {
		condition = "false";
	};
    
    class Tacops_Campaign_03 {
		condition = "false";
	};

    class Tanks_Campaign_01 {
		condition = "false";
	};

    class Contact_Campaign {
		condition = "false";
	};

    class OldMan {
		condition = "false";
	};

    class SP_FD14 {
		condition = "false";
	};

    class AoW_Showcase_AoW {
		condition = "false";
	};

    class AoW_Showcase_Future {
		condition = "false";
	};

    class Extraction_lxWS {
		condition = "false";
	};

    class Showcase_VR_lxWS {
		condition = "false";
	};

	class Showcase_Alchemist_lxWS {
		condition = "false";
	};
};


