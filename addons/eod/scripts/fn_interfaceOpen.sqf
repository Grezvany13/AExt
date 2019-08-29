if (player getVariable ["PowerEnabled", false]) then
{
    ctrlShow [67678, True];
    ctrlShow [67681, True];

    if (player getVariable ["RespiratorEnabled", false]) then {
        ctrlShow [67677, True];
        ctrlShow [67684, False];
        [] spawn AEXT_EOD_fnc_respiratorSound;
    } else {
        ctrlShow [67684, True];
        ctrlShow [67677, False];
    };

    if (player getVariable ["SoundSystemEnabled", false]) then {
        ctrlShow [67679, True];
        ctrlShow [67682, False];
        ["Activate"] spawn AEXT_EOD_fnc_toggleSounds;
    } else {
        ctrlShow [67682, True];
        ctrlShow [67679, False];
        ["Deactivate"] spawn AEXT_EOD_fnc_toggleSounds;
    };

    if (player getVariable ["LightSwitch", false]) then {
        ctrlShow [67680, True];
        ctrlShow [67683, False];
        ["Light On"] spawn AEXT_EOD_fnc_lights;
    } else {
        ctrlShow [67680, False];
        ctrlShow [67683, True];
        ["Light Off"] spawn AEXT_EOD_fnc_lights;
    };
} else {
    ctrlShow [67678, False];
    ctrlShow [67677, False];
    ctrlShow [67679, False];
    ctrlShow [67680, False];
    ctrlShow [67681, False];
    ctrlShow [67682, False];
    ctrlShow [67683, False];
    ctrlShow [67684, False];
};
