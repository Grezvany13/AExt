_action = _this select 0;

if ((_action isEqualTo "Activate") || (player getVariable ["SoundSystemEnabled", false])) exitwith {
    [] spawn AEXT_EOD_fnc_suppressSounds;
};

if ((_action isEqualTo "Deactivate") || (!(player getVariable ["SoundSystemEnabled", false]))) then {
    [] spawn AEXT_EOD_fnc_restoreSounds;
};
