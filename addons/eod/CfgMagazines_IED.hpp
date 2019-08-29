class DemoCharge_Remote_Mag;

class AEXT_EOD_ied01_Magazine: DemoCharge_Remote_Mag {
    author = "Monovdd";
    displayName = "$STR_AEXT_EOD_ied01";
    model = "x\aext\addons\eod\models\ied01.p3d";
    picture = "x\aext\addons\eod\textures\ied01_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied01";
    ACE_Explosives_Placeable = 1;
    ACE_Explosives_DelayTime = 1.5;
    useAction = 0;

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied01_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied01_Range_Ammo";
            digDistance = 0;
        };
    };
};

class AEXT_EOD_ied02_Magazine: AEXT_EOD_ied01_Magazine {
    displayName = "$STR_AEXT_EOD_ied02";
    model = "x\aext\addons\eod\models\ied02.p3d";
    picture = "x\aext\addons\eod\textures\ied02_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied02";

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied02_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied02_Range_Ammo";
            digDistance = 0;
        };
    };
};

class AEXT_EOD_ied03_Magazine: AEXT_EOD_ied01_Magazine {
    displayName = "$STR_AEXT_EOD_ied03";
    model = "x\aext\addons\eod\models\ied03.p3d";
    picture = "x\aext\addons\eod\textures\ied03_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied03";

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied03_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied03_Range_Ammo";
            digDistance = 0;
        };
    };
};

class AEXT_EOD_ied04_Magazine: AEXT_EOD_ied01_Magazine {
    displayName = "$STR_AEXT_EOD_ied04";
    model = "x\aext\addons\eod\models\ied04.p3d";
    picture = "x\aext\addons\eod\textures\ied04_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied04";

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied04_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied04_Range_Ammo";
            digDistance = 0;
        };
    };
};

class AEXT_EOD_ied05_Magazine: AEXT_EOD_ied01_Magazine {
    displayName = "$STR_AEXT_EOD_ied05";
    model = "x\aext\addons\eod\models\EWK_ied01.p3d";
    picture = "x\aext\addons\eod\textures\ied05_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied05";

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied05_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied05_Range_Ammo";
            digDistance = 0;
        };
    };
};

class AEXT_EOD_ied06_Magazine: AEXT_EOD_ied01_Magazine {
    displayName = "$STR_AEXT_EOD_ied06";
    model = "x\aext\addons\eod\models\EWK_ied02.p3d";
    picture = "x\aext\addons\eod\textures\ied06_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied06";

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied06_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied06_Range_Ammo";
            digDistance = 0;
        };
    };
};

class AEXT_EOD_ied07_Magazine: AEXT_EOD_ied01_Magazine {
    displayName = "$STR_AEXT_EOD_ied07";
    model = "x\aext\addons\eod\models\EWK_ied03.p3d";
    picture = "x\aext\addons\eod\textures\ied07_menu.paa";

    ACE_Explosives_SetupObject = "AEXT_EOD_ied07";

    class ACE_Triggers {
        SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
        class Command {
            ammo = "AEXT_EOD_ied07_Command_Ammo";
        };
        class Cellphone: Command {};
        class DeadmanSwitch: Command {};
        class PressurePlate {
            ammo = "AEXT_EOD_ied07_Range_Ammo";
            digDistance = 0;
        };
    };
};
