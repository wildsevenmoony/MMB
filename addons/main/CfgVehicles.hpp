/*
 * Author: Moony
 * Adds ACE interaction actions for turbans, Zeus access, body hiding, and silent kills.
 */

class CfgVehicles
{
	class Logic;
	class Module_F: Logic {};

	// ACE Interactions

	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class GVAR(upTurban) {
					displayName = "Pull up Turban";
					condition = "(headgear _player) in ['lxWS_H_turban_02_black','lxWS_H_turban_02_blue','lxWS_H_turban_02_green','lxWS_H_turban_02_green_pattern','lxWS_H_turban_02_orange','lxWS_H_turban_02_red','lxWS_H_turban_02_sand','lxWS_H_turban_02_gray','lxWS_H_turban_02_yellow']";
					exceptions[] = {};
					statement = QUOTE(_player call FUNC(turbanUp));
					icon = "";
				};

				class GVAR(downTurban) {
					displayName = "Pull down Turban";
					condition = "(headgear _player) in ['lxWS_H_turban_03_black','lxWS_H_turban_03_blue','lxWS_H_turban_03_green','lxWS_H_turban_03_green_pattern','lxWS_H_turban_03_orange','lxWS_H_turban_03_red','lxWS_H_turban_03_sand','lxWS_H_turban_03_gray','lxWS_H_turban_03_yellow']";
					exceptions[] = {};
					statement = QUOTE(_player call FUNC(turbanDown));
					icon = "";
				};
			};

			class GVAR(zeus) {
				displayName = "Zeus";
				condition = "";
				exceptions[] = {};
				statement = "";
				icon = "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa";
				showDisabled = 0;

				class GVAR(zeusPromotion) {
					displayName = "Become Zeus";
					condition = QUOTE(!(_player getVariable [ARR_2(SQVAR(zeusAction),false)]) && ((_player getVariable [ARR_2(SQVAR(zeusActionEligible),false)]) || (serverCommandAvailable '#logout') || (!isMultiplayer)));
					exceptions[] = {};
					statement = QUOTE(_player call FUNC(zeusActionPromotion));
					icon = "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa";
					showDisabled = 0;
				};
				class GVAR(zeusDemotion) {
					displayName = "Step down as Zeus";
					condition = QUOTE(_player getVariable [ARR_2(SQVAR(zeusAction),false)]);
					exceptions[] = {};
					statement = QUOTE(_player call FUNC(zeusActionDemotion));
					icon = "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa";
					showDisabled = 0;
				};
			};
		};

		

		class ACE_Actions {
			class ACE_MainActions {
				class GVAR(hideBody) {
					displayName = "Hide Body";
					condition = "(!(Alive _target))";
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,_target)] call FUNC(hideBodyAction));
					icon = "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa";				
				};
			};

			class ACE_Head {
				/*class GVAR(knockOut) {
					displayName = "Knock Out";
					condition = "(_player distance _target < 2.5) AND (Alive _target) AND !(_target getVariable ['ACE_isUnconscious', false]) AND (vehicle _target == _target)";
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,_target)] call FUNC(aceKnockOut));
					icon = PATHTOF(icon\knockout.paa);
				};*/
				class GVAR(silentKill) {
					displayName = "Break Neck";
					condition = "(stance _player == 'CROUCH') && (_target getVariable ['ACE_isUnconscious', false]) && (alive _target) && (vehicle _target == _target)";
					exceptions[] = {};
					statement = QUOTE([ARR_2(_player,_target)] call FUNC(aceSilentkill));
					icon = PATHTOF(icon\knockout.paa);
				};
			};
		};
	};
};
