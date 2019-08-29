#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#include "\a3\ui_f\hpp\defineDIKCodes.inc"

[
    "EOD Suite",
    "EOD Interface Key",
    localize "STR_Show_Close_Interface",
    {
        [_this] spawn AEXT_EOD_fnc_interface;
    },
    {},
    [DIK_NUMPAD1, [false, false, false]]
] call CBA_fnc_addKeybind;

if (hasInterface) then {
    waitUntil {!isNull player;};

    player setVariable ["PowerEnabled", true];                                      // Alimentation_Activer
    player setVariable ["RespiratorEnabled", false];                                 // Respirateur_Activer
    player setVariable ["RespiratorLoop", false];                                    // Boucle_Respirateur_Lancer
    player setVariable ["RespiratorInstanceNumber", 0];                              // Nombre_Instance_Respirateur
    player setVariable ["SoundSystemEnabled", false];                                // Systeme_Sonore_Activer
    player setVariable ["SoundSystemActive", false];                                 // Systeme_Sonore_Actif
    player setVariable ["EODS_SoundRegulation_normalVolumeSound", soundVolume];
    player setVariable ["EODS_SoundRegulation_normalVolumeMusic", musicVolume];
    player setVariable ["ExternalRespiratorEnabled", false];                         // Respirateur_Externe_Activer
    player setVariable ["LightSwitch", false];                                       // Lumiere_Allumer
    player setVariable ["VentilatorEnabled", false];                                 // Ventilation_Activer

    [_this, "Spawn"] call AEXT_EOD_fnc_cameraCheck;
};

ADDON = true;
