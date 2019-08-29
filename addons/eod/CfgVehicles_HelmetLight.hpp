class Car: LandVehicle {
    class NewTurret;
};
class Car_F: Car {
    class AnimationSources;
    class Turrets {
        class MainTurret: NewTurret{};
    };
    class HitPoints {
        class HitLFWheel;
        class HitLF2Wheel;
        class HitRFWheel;
        class HitRF2Wheel;
        class HitGlass1;
        class HitGlass2;
        class HitGlass3;
        class HitGlass4;
        class HitGlass5;
        class HitGlass6;
    };
};
class AEXT_EOD_Helmet_Light_base: Car_F {

    pilotLight = true;  //spawn vehicle with headlights on
    collisionLight = true; //spawn vehicle with collision lights on

    class SpeechVariants {
        class Default {
            speechSingular[] = {
                "veh_vehicle_armedcar_s"
            };
            speechPlural[] = {
                "veh_vehicle_armedcar_p"
            };
        };
    };
    textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
    textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
    nameSound = "veh_vehicle_armedcar_s";
    author = "MrEwok";
    _generalMacro = "EOD9_HELMET_Lights_VEH_base";
    model = "x\aext\addons\eod\models\EOD9_HELMET_Lights_VEH.p3d";
    Picture = "";
    Icon = "";
    mapSize = 6;
    displayName = "EOD9_HELMET_Lights_VEH_base";
    scope = 0;
    faction = BLU_F;
    side = 1;
    vehicleClass = "Car";
    crew = "B_Soldier_F";
    typicalCargo[]= {
        "B_Soldier_F"
    };
    //accuracy=0.3;
    //water resistance and effects on vehicle (this may need to be raised to avoid the engine be destructed by water)
    WaterLeakiness = 10; // 0 for no water dammage
    maxFordingDepth = 0.5; // 100 so it's able to go about 100m under the sea level
    waterResistance = 1; // 100 for heavy water resistance
    //
    wheelCircumference = 2.8340001;
    antiRollbarForceCoef = 12;
    antiRollbarForceLimit = 10;
    antiRollbarSpeedMin = 20;
    antiRollbarSpeedMax = 50;
    crewVulnerable = 1; // can the crew be killed? 1= yes, 0 = no
    crewCrashProtection = 0.15000001;
    weapons[] = {}; //we can give a horn by defining it as a weapon and add it here (this is the vehicle weapon not the turret one )
    magazines[] = {};
    damperSize = 0.2;
    damperForce = 1;
    damperDamping = 1;
    armor = 80;
    damageResistance = 0.00562;
    turnCoef = 2.5;
    steerAheadPlan = 0.2;
    steerAheadSimul = 0.40000001;
    predictTurnPlan = 0.89999998;
    predictTurnSimul = 0.5;
    brakeDistance = 1;
    terrainCoef = 1.5;
    wheelDamageThreshold = 0.69999999;
    wheelDestroyThreshold = 0.99000001;
    wheelDamageRadiusCoef = 0.94999999;
    wheelDestroyRadiusCoef = 0.44999999;
    cost = 200000;
    precision = 15;
    armorGlass = 0.5;
    armorWheels = 0.1;
    soundServo[] = {
        "A3\sounds_f\dummysound",
        0.0099999998,
        1,
        10
    };
    soundEnviron[] = {
        "",
        0.56234133,
        1
    };
    transportMaxBackpacks = 0;
    transportSoldier = 0;
    class Library {
        libTextDesc = "EOD9_HELMET_Lights_VEH_base";
    };
    castDriverShadow = "false";
    driverAction = "passenger_injured_medevac_truck01"; // rtm related to driver
    cargoAction[] = {
        //	"passenger_injured_medevac_truck01" // Medical HEMTT anim
    };
    threat[] = {0.8,0.6,0.3};
    // this part define the driver animations related to model.cfg an p3d named selection
    driverLeftHandAnimName = "drivewheel";
    driverRightHandAnimName = "";
    driverLeftLegAnimName = "";
    driverRightLegAnimName = "pedal_thrust";
    //
    class TransportMagazines {};
    class TransportItems {};
    class TransportWeapons {};
    //PhysX Part.....
    idleRpm = 800;
    redRpm = 4500;
    brakeIdleSpeed = 1.78;
    fuelCapacity = 250;
    class complexGearbox {
        GearboxRatios[] = {
            "R1",
            -5.75,
            "N",
            0,
            "D1",
            4.3000002,
            "D2",
            2.3,
            "D3",
            1.5,
            "D4",
            1,
            "D5",
            0.73000002
        };
        TransmissionRatios[] = {
            "High",
            6.7589998
        };
        gearBoxMode = "auto";
        moveOffGear = 1;
        driveString = "D";
        neutralString = "N";
        reverseString = "R";
    };
    simulation = "carx";
    dampersBumpCoef = 6;
    differentialType = "all_limited";
    frontRearSplit = 0.5;
    frontBias = 1.3;
    rearBias = 1.3;
    centreBias = 1.3;
    clutchStrength = 20;
    enginePower = 276;
    maxOmega = 471;
    peakTorque = 1253;
    dampingRateFullThrottle = 0.079999998;
    dampingRateZeroThrottleClutchEngaged = 2;
    dampingRateZeroThrottleClutchDisengaged = 0.34999999;
    torqueCurve[] = {
        {0,0},
        {0.278,0.5},
        {0.34999999,0.75},
        {0.461,1},
        {0.60000002,0.94999999},
        {0.69999999,0.85000002},
        {0.80000001,0.75},
        {1,0.5}
    };
    changeGearMinEffectivity[] = {0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
    switchTime = 0.31;
    latency = 1;
    class Wheels {
        class LF {
            boneName="wheel_1_1_damper";
            steering=1;
            side="left";
            center="wheel_1_1_axis";
            boundary="wheel_1_1_bound";
            width="0.126";
            mass=30;
            MOI=12.8;
            dampingRate=0.1;
            maxBrakeTorque=10000;
            maxHandBrakeTorque=0;
            suspTravelDirection[]={0,-1,0};
            suspForceAppPointOffset="wheel_1_1_axis";
            tireForceAppPointOffset="wheel_1_1_axis";
            maxCompression=0.050000001;
            mMaxDroop=0.1;
            sprungMass=825;
            springStrength=51625; //default = 51625
            springDamperRate=8920; //default = 8920
            longitudinalStiffnessPerUnitGravity=10000;
            latStiffX=25;
            latStiffY=180;
            frictionVsSlipGraph[] = {
                {0,1},
                {0.5,1},
                {1,1}
            };
        };
        class LR: LF {
            boneName="wheel_1_2_damper";
            steering=0;
            center="wheel_1_2_axis";
            boundary="wheel_1_2_bound";
            suspForceAppPointOffset="wheel_1_2_axis";
            tireForceAppPointOffset="wheel_1_2_axis";
            maxHandBrakeTorque=3500;
        };
        class RF: LF {
            boneName="wheel_2_1_damper";
            center="wheel_2_1_axis";
            boundary="wheel_2_1_bound";
            suspForceAppPointOffset="wheel_2_1_axis";
            tireForceAppPointOffset="wheel_2_1_axis";
            steering=1;
            side="right";
        };
        class RR: RF {
            boneName="wheel_2_2_damper";
            steering=0;
            center="wheel_2_2_axis";
            boundary="wheel_2_2_bound";
            suspForceAppPointOffset="wheel_2_2_axis";
            tireForceAppPointOffset="wheel_2_2_axis";
            maxHandBrakeTorque=3500;
        };
    };
    attenuationEffectType = "CarAttenuation"; //external sound occlusion when inside
    soundGetIn[] = {};
    soundGetOut[] = {};
    soundDammage[] = {};
    soundEngineOnInt[] = {};
    soundEngineOnExt[] = {};
    soundEngineOffInt[] = {};
    soundEngineOffExt[] = {};
    buildCrash0[] = {};
    buildCrash1[] = {};
    buildCrash2[] = {};
    buildCrash3[] = {};
    soundBuildingCrash[] = {};
    WoodCrash0[] = {};
    WoodCrash1[] = {};
    WoodCrash2[] = {};
    WoodCrash3[] = {};
    WoodCrash4[] = {};
    WoodCrash5[] = {};
    soundWoodCrash[] = {};
    ArmorCrash0[] = {};
    ArmorCrash1[] = {};
    ArmorCrash2[] = {};
    ArmorCrash3[] = {};
    soundArmorCrash[] = {};
    class Sounds {
        // This is the idle sound hearable from outside (when not in cargo)
        class Idle_ext {
            sound[] = {};
            frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
            volume="engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
        };
        class Engine {
            sound[] = {};
            frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
            volume="engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
        };
        class Engine1_ext {
            sound[]=
            {
            };
            frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
            volume="engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
        };
        class Engine2_ext
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
            volume="engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
        };
        class Engine3_ext
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
            volume="engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
        };
        class IdleThrust
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
        };
        class EngineThrust
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
        };
        class Engine1_Thrust_ext
        {
            sound[]=
            {
            };
            frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
        };
        class Engine2_Thrust_ext
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
        };
        class Engine3_Thrust_ext
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
            volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
        };
        class Idle_int  // This is the idle sound hearable from inside (when in cargo)
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
            volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
        };
        class Engine_int
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
            volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
        };
        class Engine1_int
        {
            sound[]=
            {
            };
            frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
            volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
        };
        class Engine2_int
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
            volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
        };
        class Engine3_int
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
            volume="engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
        };
        class IdleThrust_int
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
        };
        class EngineThrust_int
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
        };
        class Engine1_Thrust_int
        {
            sound[]=
            {
            };
            frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
        };
        class Engine2_Thrust_int
        {
            sound[]=
            {
            };
            frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
        };
        class Engine3_Thrust_int
        {
            sound[]=
            {
            };
            frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
            volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
        };
        class Silent {
            sounds[] = {};
            frequency="0";
            volume="0";
        };
        class TiresRockOut: Silent
        {
        };
        class TiresSandOut: Silent
        {
        };
        class TiresGrassOut: Silent
        {
        };
        class TiresMudOut: Silent
        {
        };
        class TiresGravelOut: Silent
        {
        };
        class TiresAsphaltOut: Silent
        {
        };
        class NoiseOut
        {
            sound[]=
            {
            };
            frequency="1";
            volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
        };
        class TiresRockIn: Silent
        {
        };
        class TiresSandIn: Silent
        {
        };
        class TiresGrassIn: Silent
        {
        };
        class TiresMudIn: Silent
        {
        };
        class TiresGravelIn: Silent
        {
        };
        class TiresAsphaltIn: Silent
        {
        };
        class NoiseIn
        {
            sound[]=
            {
            };
            frequency="1";
            volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
        };
        class breaking_ext_road: Silent
        {
        };
        class acceleration_ext_road: Silent
        {
        };
        class turn_left_ext_road: Silent
        {
        };
        class turn_right_ext_road: Silent
        {
        };
        class breaking_ext_dirt: Silent
        {
        };
        class acceleration_ext_dirt: Silent
        {
        };
        class turn_left_ext_dirt: Silent
        {
        };
        class turn_right_ext_dirt: Silent
        {
        };
        class breaking_int_road: Silent
        {
        };
        class acceleration_int_road: Silent
        {
        };
        class turn_left_int_road: Silent
        {
        };
        class turn_right_int_road: Silent
        {
        };
        class breaking_int_dirt: Silent
        {
        };
        class acceleration_int_dirt: Silent
        {
        };
        class turn_left_int_dirt: Silent
        {
        };
        class turn_right_int_dirt: Silent
        {
        };
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
        /*	body="mainTurret";
            gun="mainGun";
            hasGunner=1;
            weapons[]=
            {
                "HMG_M2"
            };
            magazines[]=
            {
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red",
                "100Rnd_127x99_mag_Tracer_Red"
            };
            soundServo[]=
            {
                "A3\sounds_f\dummysound",
                0.0099999998,
                1,
                10
            };
            minElev=-25;
            maxElev=60;
            gunnerAction="HMMWV_Gunner01";
            viewGunnerInExternal="true";
            castGunnerShadow=1;
            stabilizedInAxes="StabilizedInAxesNone";
            gunnerRightHandAnimName="OtocHlaven_shake";
            gunnerLeftHandAnimName="OtocHlaven_shake";*/
        };
    };
    class HitPoints: HitPoints
    {
        class HitGlass1: HitGlass1
        {
            armor=0.1;
        };
        class HitGlass2: HitGlass2
        {
            armor=0.1;
        };
        class HitGlass3: HitGlass3
        {
            armor=0.1;
        };
        class HitGlass4: HitGlass4
        {
            armor=0.1;
        };
        class HitLFWheel: HitLFWheel
        {
            armor=0.38;
        };
        class HitLBWheel: HitLF2Wheel
        {
            armor=0.38;
        };
        class HitRFWheel: HitRFWheel
        {
            armor=0.38;
        };
        class HitRBWheel: HitRF2Wheel
        {
            armor=0.38;
        };
        class HitFuel
        {
            armor=1.4;
            material=-1;
            name="palivo";
            visual="";
            passThrough=1;
        };
    };
    class Damage
    {
        tex[]={};
        mat[]={
        /* Here you define the rvmats for destruction
            "", //original material applied
            "", // material applied at 0.5 dammage
            "" // material applied at 1 dammage */
        };
    };
    class Reflectors
    {
        class Left
        {
/*				color[]={1900,1300,950};
            ambient[]={5,5,5};
            position="flash_L";
            direction="flash_L_dir";
            hitpoint="flash_L";
            selection="flash_L";
            size=1;
            innerAngle=100;
            outerAngle=179;
            coneFadeCoef=10;
            intensity=1;
            useFlare=0;
            dayLight=0;
            flareSize=1;
            class Attenuation
            {
                start=1;
                constant=0;
                linear=0;
                quadratic=0.25;
                hardLimitStart=30;
                hardLimitEnd=60;
*/
            color[] = {180,156,120};
            ambient[] = {0.9,0.78,0.6};
            intensity = 20;
            size = 1;
            innerAngle = 20;
            outerAngle = 80;
            coneFadeCoef = 5;
            position = "flash_L";
            direction = "flash_L_dir";
            selection="flash_L";
            hitpoint="flash_L";
            useFlare = 1;
            flareSize = 1.4;
            flareMaxDistance = "100.0f";
            dayLight = 0;
            class Attenuation
            {
                start = 0.5;
                constant = 0;
                linear = 0;
                quadratic = 1.1;
                hardLimitStart = 20;
                hardLimitEnd = 30;
            };
        };
    	class Right: Left
        {
            position="flash_R";
            direction="flash_R_dir";
            hitpoint="flash_R";
            selection="flash_R";
        };
    /*	class Right2: Right
        {
            useFlare=1;
            position="P svetlo";
        };
        class Left2: Left
        {
            useFlare=1;
            position="L svetlo";
        };*/
    };
    aggregateReflectors[]=
    {

        {
            "Left",
            "Right"//,
        //	"Left2",
        //	"Right2"
        }

    };
    class RenderTargets //PIP
    {
    /*	class LeftMirror
        {
            renderTarget="rendertarget0";
            class CameraView1
            {
                pointPosition="PIP0_pos";
                pointDirection="PIP0_dir";
                renderQuality=2;
                renderVisionMode=4;
                fov=0.69999999;
            };
        };
        class RightMirror
        {
            renderTarget="rendertarget1";
            class CameraView1
            {
                pointPosition="PIP1_pos";
                pointDirection="PIP1_dir";
                renderQuality=2;
                renderVisionMode=4;
                fov=0.69999999;
            };
        };
    */
    };
};
class AEXT_EOD_Helmet_Light: AEXT_EOD_Helmet_Light_base
{
    pilotLight = true;  //spawn vehicle with headlights on
    collisionLight = true; //spawn vehicle with collision lights on

    scope = 1;
    faction = BLU_F;
    side = 1;
    vehicleClass = "Car";
    model = "x\aext\addons\eod\models\EOD9_HELMET_Lights_VEH.p3d";
    displayname = "EOD9_HELMET_Lights_VEH";
    hasGunner = 0;
    transportSoldier=0;
    cargoAction[] =
    {
        //"passenger_injured_medevac_truck01" // define the cargo action here
    };
    threat[]={0,0,0};
    driverLeftHandAnimName="drivewheel";
    driverRightHandAnimName="";
    driverLeftLegAnimName = "";
    driverRightLegAnimName = "pedal_thrust";
    armor=120;
    damageResistance=0.030990001;
    Picture = "";
    icon = "";
    //attendant=0; //this is the basic can heal variable from a3
    /*class Eventhandlers
    {
    };*/
    class Library
    {
        libTextDesc = "EOD9_HELMET_Lights_VEH";
    };
    class Turrets: Turrets
    {
    };
    class AnimationSources: AnimationSources
    {
    };
    class UserActions
    {
    };
    class TransportWeapons
    {
    };
    class TransportItems
    {
    };
    class Damage
    {
        tex[] = {};
        mat[] =
        {
        //once again dammage rvmat applied
        };
    };
    HiddenSelections[] =
    {
    /*
    //Related to named selection in model.
        "camo",
        "camo1",
        "camo2",
        "camo3"*/
    };
    HiddenSelectionsTextures[] =
    {
    /*Path to textures applied to the related hiddenselection*/
    };
};
