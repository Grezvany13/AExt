if ((player getVariable ["RespiratorInstanceNumber", 0]) >= 1) exitwith {};

player setVariable ["RespiratorInstanceNumber", ((player setVariable ["RespiratorInstanceNumber", 0]) + 1)];

waituntil
{
    player setVariable ["RespiratorLoop", true];
    if (
        (!alive player)
        || (!(player getVariable ["RespiratorEnabled", false]))
        || (headgear player != "AEXT_EOD_Helmet")
        || (!(player getVariable ["PowerEnabled", false]))
        || (!(player getVariable ["RespiratorLoop", false]))
    ) exitwith {
        player setVariable ["RespiratorInstanceNumber", ((player setVariable ["RespiratorInstanceNumber", 0]) - 1)];
        player setVariable ["RespiratorLoop", false];
        true
    };
    playsound "Redbreather2_resp_Low";
    sleep 3;
    false
};

// player say ["Redbreather2_resp_Low",5];
