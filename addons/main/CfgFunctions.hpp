/*
 * Author: Moony
 * Registers MMB core scripted functions by category.
 */

class CfgFunctions
{
	class PREFIX
	{
		class Misc
		{
			file = PATHTOF(fnc\misc);
			class clusterArray {};
			class createHashMapFromPairs {};
			class mergeHashMaps {};
			class parseClassnameList {};
			class replaceInString {};
			class trackMarker {};
		};

		class Dialog
		{
			file = PATHTOF(fnc\dialog);
			class collectDisplayValues {};
			class confirmDisplay {};
			class exportDisplayValues {};
			class importDisplayValues {};
			class initDisplay {};
			class initDisplayPositioning {};
		};

	};
};
