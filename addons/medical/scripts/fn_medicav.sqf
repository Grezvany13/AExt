params ["_caller"];

// take/spawn medivac helicopter

// fly to area near caller

// get prefered signal
_smokes = ["SmokeShell", "SmokeShellRed", "SmokeShellGreen", "SmokeShellYellow", "SmokeShellPurple", "SmokeShellBlue", "SmokeShellOrange"];
_smokeColor = _smokes select floor random count _smokes;

_chems = ["Chemlight_green", "Chemlight_red", "Chemlight_yellow", "Chemlight_blue";
_chemColor = _chems select floor random count _chems;

// trigger radio message

// wait till player threw a smoke grenade
EHindex = _caller addEventHandler ["Fired", {
    if ((_this select 4) isEqualTo _smokeColor) then {
        _grenadeObj = (_this select 6);
        _makeFire = [_grenadeObj] spawn {
            private ["_grenadePos","_grenadeObj"];
            _grenadeObj = (_this select 0);
            waitUntil { (getPosATL _grenadeObj select 2) < 0.1 };
            _grenadePos = getPosATL _grenadeObj;
            sleep 1;

            // landing

            _caller removeEventHandler ["Fired", EHindex];
            sleep 0.01;
        };
    };
}];
