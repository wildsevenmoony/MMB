/*
 * Author: Moony
 * Registers MMA scripted functions by category.
 */

class CfgFunctions
{
	class PREFIX
	{
		class Misc
		{
			file = PATHTOF(fnc\misc);
			//class aceKnockout {};
			class aceSilentkill {};
			class hideBodyProgress {};
			class inHouse{};
			class replaceInString{};
			class turbanDown{};
			class turbanUp{};
		};

		class HideBody
		{
			file = PATHTOF(fnc\hidebody);
			class hideBodyAction{};
			class hideBodyNoToolInside{};
			class hideBodyNoToolOutside{};
			class hideBodyToolInside{};
			class hideBodyToolOutside{};
		};
		class ZeusAction
		{
			file = PATHTOF(fnc\zeusaction);
			class zeusActionDemotion{};
			class zeusActionDemotionExec{};
			class zeusActionInitAdmin{};
			class zeusActionPromotion{};
			class zeusActionPromotionExec{};
			class zeusActionPromotionHandleDC{};
		};

	};
};
