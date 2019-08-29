#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "AEXT_EOD_IED_Base",
            "AEXT_EOD_ied01",
            "AEXT_EOD_ied02",
            "AEXT_EOD_ied03",
            "AEXT_EOD_ied04",
            "AEXT_EOD_ied05",
            "AEXT_EOD_ied06",
            "AEXT_EOD_ied07",

            "EOD_engineer",
            "AEXT_EOD_Helmet_Light",

            "AEXT_EOD_Talon"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "aext_main",
            "cba_main",
            "A3_Armor_F"
        };
        author = "Monovdd";
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"

#include "CfgUI.hpp"

#include "CfgEventHandlers.hpp"
