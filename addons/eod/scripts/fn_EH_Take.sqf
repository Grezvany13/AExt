params ["_unit", "_container", "_item"];

if (_item isEqualTo "AEXT_EOD_Helmet") then {
    [_item, "Take"] spawn AEXT_EOD_fnc_cameraCheck;
    [] spawn AEXT_EOD_fnc_interfaceOpen;
};
