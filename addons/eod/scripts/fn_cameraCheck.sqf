params ["_item", "_type"];

_helmet = "";
_helmet_display_interface = false;
Helmet_Loop = "Init";

if (_type isEqualTo "Take") then {
    _helmet = _item;
};

if ((_type isEqualTo "Respawn") || (_type isEqualTo "Spawn")) then {
    _helmet = headgear player;
};

if (Helmet_Loop isEqualTo "True") exitwith {};

if (_helmet isEqualTo "AEXT_EOD_Helmet") then {
    waituntil {
        if (Helmet_Loop isEqualTo "Init") then {
            Helmet_Loop = "True";
        };

        [] spawn {
            if ((cameraView isEqualTo "INTERNAL") && (!_helmet_display_interface)) exitwith {
                ("AEXT_EOD_Helmet_Layer" spawn BIS_fnc_rscLayer) cutRsc ["RscEOD_Helmet", "PLAIN", 0, true];
                _helmet_display_interface = true;
            };

            if ((cameraView isEqualTo "EXTERNAL") && (_helmet_display_interface)) then {
                ("AEXT_EOD_Helmet_Layer" spawn BIS_fnc_rscLayer) cutRsc ["default", "PLAIN", 0, true];
                _helmet_display_interface = false;
            };
        };

        if ((!alive player) || (headgear player != "AEXT_EOD_Helmet")) exitwith {
            Helmet_Loop = "False";
            ("AEXT_EOD_Helmet_Layer" spawn BIS_fnc_rscLayer) cutRsc ["default", "PLAIN", 0, true];
            ["Eteindre"] spawn Script_EOD_SUIT_Lumieres;
            true
        };
        false
    };
};
