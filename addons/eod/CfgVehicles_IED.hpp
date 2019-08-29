class ACE_Explosives_Place;
class AEXT_EOD_IED_Base: ACE_Explosives_Place {
    author = "Monovdd";
    model = "\A3\Weapons_F\empty.p3d";
    ACE_offset[] = {0, 0, 0};

    class AnimationSources {
        class Battery_hide {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
        class Detonator_hide {
            source = "user";
            animPeriod = 1;
            initPhase = 0;
        };
    };
};

class AEXT_EOD_ied01: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied01";
    model = "x\aext\addons\eod\models\ied01.p3d";
    picture = "x\aext\addons\eod\textures\ied01_menu.paa";
};

class AEXT_EOD_ied02: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied02";
    model = "x\aext\addons\eod\models\ied02.p3d";
    picture = "x\aext\addons\eod\textures\ied02_menu.paa";
};

class AEXT_EOD_ied03: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied03";
    model = "x\aext\addons\eod\models\ied03.p3d";
    picture = "x\aext\addons\eod\textures\ied03_menu.paa";
};

class AEXT_EOD_ied04: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied04";
    model = "x\aext\addons\eod\models\ied04.p3d";
    picture = "x\aext\addons\eod\textures\ied04_menu.paa";
};

class AEXT_EOD_ied05: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied05";
    model = "x\aext\addons\eod\models\EWK_ied01.p3d";
    picture = "x\aext\addons\eod\textures\ied05_menu.paa";
};

class AEXT_EOD_ied06: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied06";
    model = "x\aext\addons\eod\models\EWK_ied02.p3d";
    picture = "x\aext\addons\eod\textures\ied06_menu.paa";
};

class AEXT_EOD_ied07: AEXT_EOD_IED_Base {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied07";
    model = "x\aext\addons\eod\models\EWK_ied03.p3d";
    picture = "x\aext\addons\eod\textures\ied07_menu.paa";
};
