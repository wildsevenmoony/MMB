class RscDisplay;
class RscText;
class RscControlsGroup;
class RscButtonMenuCancel;
class RscButtonMenuOK;

/*
    Reusable dynamic Zeus-module display foundation.

    The static config defines only the frame. Module-specific rows are created
    in SQF by the populate function stored on the display before onLoad calls
    MMB_fnc_initDisplay.
*/
class GVAR(RscXSliderH) {
    type = CT_XSLIDER;
    style = SL_HORZ;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0;
    h = 0;
    color[] = {1, 1, 1, 0.7};
    colorActive[] = {1, 1, 1, 1};
    colorDisabled[] = {1, 1, 1, 0.5};
    arrowEmpty = "\a3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
    arrowFull = "\a3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
    border = "\a3\ui_f\data\gui\cfg\slider\border_ca.paa";
    thumb = "\a3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
};

class GVAR(RscBaseDisplay): RscDisplay {
    idd = IDD_MMB_DYNAMIC_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "call MMB_fnc_initDisplay";

    class ControlsBackground {
        class Background: RscText {
            idc = IDC_BACKGROUND;
            x = POS_X(0);
            y = POS_Y(0);
            w = POS_W(28);
            h = POS_H(16);
            colorBackground[] = GUI_BG_COLOR;
        };

        class Title: RscText {
            idc = IDC_TITLE;
            text = "Zeus Module";
            x = POS_X(0);
            y = POS_Y(0);
            w = POS_W(28);
            h = POS_H(1);
            colorBackground[] = GUI_THEME_COLOR;
            style = ST_LEFT;
            moving = 1;
        };
    };

    class Controls {
        class Content: RscControlsGroup {
            idc = IDC_MAIN_GROUP;
            x = POS_X(0.5);
            y = POS_Y(1.25);
            w = POS_W(27);
            h = POS_H(12.5);

            class HScrollbar {
                height = 0;
            };

            class VScrollbar {
                width = 0.021;
                autoScrollEnabled = 0;
                arrowEmpty = "\a3\ui_f\data\gui\rsccommon\rsccombo\arrow_combo_ca.paa";
                arrowFull = "\a3\ui_f\data\gui\rsccommon\rsccombo\arrow_combo_active_ca.paa";
            };

            class Controls {};
        };

        class ButtonCancel: RscButtonMenuCancel {
            idc = IDC_CANCEL;
            text = "Cancel";
            x = POS_X(0.5);
            y = POS_Y(14.5);
            w = POS_W(5);
            h = POS_H(1);
            action = "closeDialog 2";
        };

        class ButtonExport: RscButtonMenuOK {
            idc = IDC_BUTTON_EXPORT;
            text = "Export";
            x = POS_X(8);
            y = POS_Y(14.5);
            w = POS_W(5);
            h = POS_H(1);
            action = "";
        };

        class ButtonImport: RscButtonMenuOK {
            idc = IDC_BUTTON_IMPORT;
            text = "Import";
            x = POS_X(15);
            y = POS_Y(14.5);
            w = POS_W(5);
            h = POS_H(1);
            action = "";
        };

        class ButtonOK: RscButtonMenuOK {
            idc = IDC_OK;
            text = "OK";
            x = POS_X(22.5);
            y = POS_Y(14.5);
            w = POS_W(5);
            h = POS_H(1);
            action = "";
        };
    };
};
