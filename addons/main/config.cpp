#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "$STR_AExt_Author";
        url = "$STR_AExt_URL";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@AExt";
        name = "ArmA Extended";
        picture = "x\aext\addons\main\ui\AExt_logo.paa";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "$STR_AExt_URL";
        description = "This work is licensed under ARMA PUBLIC LICENSE SHARE ALIKE (APL-SA)";
    };
};

#include "CfgEventHandlers.hpp"
