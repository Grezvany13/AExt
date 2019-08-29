class B_engineer_F;
class EOD_engineer: B_engineer_F {
    scope= 2;
    author = "MrEwok";
    displayName= "$STR_AEXT_EOD_Engineer";
    vehicleClass= "EWK_veh_class";
    attendant = 0;
    uniformAccessories[]= {};
    nakedUniform = "U_BasicBody";
    uniformClass= "AEXT_EOD_Uniform";
    model= "x\aext\addons\eod\models\EOD_Uniform.p3d";
    hiddenSelections[]={"insignia"};
    hiddenSelectionsTextures[]={};
    weapons[]= {"Throw","Put"};
    respawnWeapons[]= {"Throw","Put"};
    Items[]= {"FirstAidKit"};
    RespawnItems[]= {"FirstAidKit"};
    magazines[]= {};
    respawnMagazines[]= {};
    linkedItems[] = {"AEXT_EOD_Helmet","AEXT_EOD_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[] = {"AEXT_EOD_Helmet","AEXT_EOD_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    backpack = "";

    canDeactivateMines = 1;
    explosiveSpecialist = 1;

    class Wounds {
        tex[] = {};
        mat[] = {
            "x\aext\addons\eod\textures\green_tex2.rvmat", 			/// what material is changed
            "x\aext\addons\eod\textures\Green_Tex_wound.rvmat",	/// how does the material look like in damage 0.5 and more
            "x\aext\addons\eod\textures\Green_Tex_wound.rvmat",	/// how does the material look like while the part has damage 1

            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",			/// next materials are used through personality of the soldier
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
        };
    };
};
