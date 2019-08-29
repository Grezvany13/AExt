if (!isnull finddisplay 160791) exitwith {
    closedialog 160791;
};

if (isnull finddisplay 160791) then {
    if ((uniform player isEqualTo "AEXT_EOD_Uniform") && (headgear player isEqualTo "AEXT_EOD_Helmet")) then {
        createdialog "EOD_Suit_HandControl_Dialog";
        [] spawn AEXT_EOD_fnc_interfaceOpen;
    };
};
