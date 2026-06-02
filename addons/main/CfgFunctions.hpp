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
			class parseClassnameList {};
			class replaceInString {};
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
