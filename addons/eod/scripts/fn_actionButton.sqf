params ["_button"];

if (_button isEqualTo "Power") exitwith {
    if (player getVariable ["PowerEnabled", false]) exitwith {
        player setVariable ["PowerEnabled", false];
        ["Lights Off"] spawn AEXT_EOD_fnc_lights;
        ["Deactivate"] spawn AEXT_EOD_fnc_toggleSounds;
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };

    if (!(player getVariable ["PowerEnabled", false])) then {
        player setVariable ["PowerEnabled", true];
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };
};

if (!(player getVariable ["PowerEnabled", false])) exitwith {};

if (_button isEqualTo "Respirator") exitwith {
    if (player getVariable ["RespiratorEnabled", false]) exitwith {
        player setVariable ["RespiratorEnabled", false];
        player setVariable ["RespiratorLoop", false];
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };

    if (!(player getVariable ["RespiratorEnabled", false])) then {
        player setVariable ["RespiratorEnabled", true];
        ctrlShow [67677, true];
        ctrlShow [67684, False];

        if (!(player getVariable ["RespiratorLoop", false])) then {
            [] spawn AEXT_EOD_fnc_respiratorSound;
        };
    };
};

if (_button isEqualTo "Sound system") exitwith {
    if (player getVariable ["SoundSystemEnabled", false]) exitwith {
        player setVariable ["SoundSystemEnabled", false];
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };

    if (!(player getVariable ["SoundSystemEnabled", false])) then {
        player setVariable ["SoundSystemEnabled", true];
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };
};

if (_button isEqualTo "Lights") then {
    if (player getVariable ["LightSwitch", false]) exitwith {
        player setVariable ["LightSwitch", false];
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };

    if (!(player getVariable ["LightSwitch", false])) then {
        player setVariable ["LightSwitch", true];
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };
};
