class WeaponFireGun;
class WeaponCloudsGun;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgWeapons {
    class Default;
    class Put: Default {
        muzzles[] += {"AEXT_EOD_Muzzle"};
        class PutMuzzle;
        class AEXT_EOD_Muzzle: PutMuzzle {
            displayName = "AEXT_EOD_Muzzle";
            magazines[] = {
                "AEXT_EOD_ied01_Magazine",
                "AEXT_EOD_ied02_Magazine",
                "AEXT_EOD_ied03_Magazine",
                "AEXT_EOD_ied04_Magazine",
                "AEXT_EOD_ied05_Magazine",
                "AEXT_EOD_ied06_Magazine",
                "AEXT_EOD_ied07_Magazine"
            };
        };
    };

    class ItemCore;
    class InventoryItem_Base_F;
    // class ACE_ItemCore;

	class AEXT_EOD_ItemCore: ItemCore {
		scope = 0;
	};

    // IEDs
    class AEXT_EOD_ied01: AEXT_EOD_ItemCore {
		scope = 2;
		class ItemInfo {
			mass = 70;
			type = 201;
		};
        displayName = "$STR_AEXT_EOD_ied01";
        descriptionShort = "";
        model = "x\aext\addons\eod\models\ied01.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_01.paa";
	};

    class AEXT_EOD_ied02: AEXT_EOD_ied01 {
        displayName = "$STR_AEXT_EOD_ied02";
        model = "x\aext\addons\eod\models\ied02.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_02.paa";
    };

    class AEXT_EOD_ied03: AEXT_EOD_ied01 {
        displayName = "$STR_AEXT_EOD_ied03";
        model = "x\aext\addons\eod\models\ied03.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_03.paa";
    };

    class AEXT_EOD_ied04: AEXT_EOD_ied01 {
        displayName = "$STR_AEXT_EOD_ied04";
        model = "x\aext\addons\eod\models\ied04.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_04.paa";
    };

    class AEXT_EOD_ied05: AEXT_EOD_ied01 {
        displayName = "$STR_AEXT_EOD_ied05";
        model = "x\aext\addons\eod\models\EWK_ied01.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_05.paa";
    };

    class AEXT_EOD_ied06: AEXT_EOD_ied01 {
        displayName = "$STR_AEXT_EOD_ied06";
        model = "x\aext\addons\eod\models\EWK_ied02.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_06.paa";
    };

    class AEXT_EOD_ied07: AEXT_EOD_ied01 {
        displayName = "$STR_AEXT_EOD_ied07";
        model = "x\aext\addons\eod\models\EWK_ied03.p3d";
        picture = "x\aext\addons\eod\textures\icono_ied_07.paa";
    };

    // EOD Suit
    class UniformItem: InventoryItem_Base_F {
		type = 801;
	};
	class VestItem: InventoryItem_Base_F {
		type = 701;
		uniformType = "Default";
		hiddenSelections[] = {};
		armor = 0;
		passThrough = 1;
		hitpointName = "HitBody";
	};
	class HeadgearItem: InventoryItem_Base_F {
		allowedSlots[] = {901,605};
		type = 605;
		hiddenSelections[] = {};
		armor = 0;
		passThrough = 1;
		hitpointName = "HitHead";
	};
	class AEXT_EOD_Helmet_Base: ItemCore {
		scope= 2;
		weaponPoolAvailable = 1;
		displayName="AEXT_EOD_Helmet_Base";
		picture="x\aext\addons\eod\textures\EOD9_Helmet_Icon_ca.paa";
		model="x\aext\addons\eod\models\EOD9_HELMET.p3d";
		hiddenSelections[] = {
			"camo"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="x\aext\addons\eod\models\EOD9_HELMET.p3d";
			modelSides[]={6};
			armor=4;
			passThrough=0.5;
			hiddenSelections[]=
			{
			};
		};
	};
	class AEXT_EOD_Helmet: AEXT_EOD_Helmet_Base
	{
		displayName="$STR_AEXT_EOD_Helmet";
		model="x\aext\addons\eod\models\EOD9_HELMET.p3d";
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		class ItemInfo: HeadgearItem
		{
			mass=800;
			uniformModel="x\aext\addons\eod\models\EOD9_HELMET.p3d";
			modelSides[]={6};
			armor=10000;
			passThrough=0.0;
			hiddenSelections[]={};
        };
	};
	class AEXT_EOD_Uniform_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="x\aext\addons\eod\models\EOD_Uniform.p3d";
			uniformClass="EOD_engineer";
			containerClass="Supply20";
			mass=0;
		};
	};
	class AEXT_EOD_Uniform: AEXT_EOD_Uniform_Base
	{
		scope=2;
		displayName="$STR_AEXT_EOD_Uniform";
		picture="x\aext\addons\eod\textures\EOD9_Uniform_Icon_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"x\aext\addons\eod\textures\suitpack_EOD_Suit_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EOD_engineer";
			containerClass="Supply20";
			mass=80;
		};
	};
	class AEXT_EOD_Vest_Base: ItemCore
	{
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		picture="x\aext\addons\eod\textures\EOD9_Vest_Icon_ca.paa";
		model="x\aext\addons\eod\models\EOD_SUIT_vest.p3d";
		hiddenSelections[]={};
		class ItemInfo: VestItem
		{
			uniformmodel="x\aext\addons\eod\models\EOD_SUIT_vest.p3d";
			hiddenSelections[]={};
			containerClass="Supply0";
			mass=0;
			armor=0;
			passThrough=1;
		};
	};
	class AEXT_EOD_Vest: AEXT_EOD_Vest_Base
	{
		scope=2;
		displayName="$STR_AEXT_EOD_Vest";
		picture="x\aext\addons\eod\textures\EOD9_Vest_Icon_ca.paa";
		model="x\aext\addons\eod\models\EOD_SUIT_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="x\aext\addons\eod\models\EOD_SUIT_vest.p3d";
			containerClass="Supply40";
			mass=1000;
			armor=100000;
			passThrough=0.000001;
			class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8000; // addition to armor of referenced hitpoint
				passThrough	= 0.0005; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8000;
				passThrough	= 0.0005;
			};
			class Chest
			{
				hitpointName	= "HitChest";
				armor		= 8000;
				passThrough	= 0.0001;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 8000;
				passThrough	= 0.0001;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor		= 80000;
				passThrough	= 0.0001;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.0001;
			};
		};
		};
	};


    // EOD Talon
    class FakeWeapon;
	class TalonARM: FakeWeapon
	{
		scope=1;
		displayname="Talon ARM";
		nameSound="";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
		};
		class StandardSound
		{
			class StandardSound
			{
				begin1[]=
				{
				};
				soundBegin[]=
				{
				};
				weaponSoundEffect="";
			};
			soundFly[]=
			{
			};
			weaponSoundEffect="";
			burst=1;
			reloadTime=2;
			autoFire=0;
		};
		minRange=80;
		minRangeProbab=0.69999999;
		midRange=2000;
		midRangeProbab=0.69999999;
		maxRange=4000;
		maxRangeProbab=0.1;
		reloadTime=1.8;
		magazineReloadTime=5;
		maxLeadSpeed=100;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"TalonARM_Fake_Mag"
		};
		ballisticsComputer=0;
		class GunParticles
		{
		};
		modes[]=
		{
			"Single1"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="";
			sounds[]=
			{
			};
			class StandardSound
			{
				begin1[]=
				{
				};
				soundBegin[]=
				{
				};
				weaponSoundEffect="";
			};
			soundFly[]=
			{
			};
			weaponSoundEffect="";
			burst=1;
			reloadTime=2;
			autoFire=0;
		};
	};
};
