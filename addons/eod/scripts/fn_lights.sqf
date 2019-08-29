_action = _this select 0;

if ((_action isEqualTo "Light On") && {isnil {HelmetLight} || {isnull HelmetLight}}) exitwith {
    HelmetLight = createVehicle ["AEXT_EOD_Helmet_Light", (getPos player), [], 0, "CAN_COLLIDE"];
    HelmetLight setPilotLight true;
    HelmetLight attachTo [Player, [-0.1,0,-0.62], "Head"];

    onEachFrame {
        _data = [player] call CBA_fnc_headDir;

        _beg = ASLToAGL eyePos player;
        _end = (_beg vectorAdd (eyeDirection player vectorMultiply 100));

        _A = ((_beg select 2) - (_end select 2));
        _B = [_beg select 0, _beg select 1, 0] distance [_end select 0, _end select 1, 0];
        _pitch = acos (_A / _B);

        [HelmetLight, [_data select 0, _pitch, 0]] call BIS_fnc_setObjectRotation;
    };
};

if ((_action isEqualTo "Light Off") && (!isnil {HelmetLight})) then {
    deletevehicle HelmetLight;
};
