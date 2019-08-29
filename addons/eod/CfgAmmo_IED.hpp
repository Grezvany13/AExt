class AEXT_EOD_Base_Remote_Ammo: PipeBombBase {
    soundActivation[] = {"", 0, 0, 0};
    soundDeactivation[] = {"", 0, 0, 0};
    triggerWhenDestroyed = 1;
    ACE_explodeOnDefuse = 0.02;
    ACE_minedetector_detectable = 1;
    //ACE_explosives_defuseObjectPosition[] = {-1.415, 0, 0.12};
    ACE_explosives_size = 0;
    soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.8, 1, 40};
    mineTrigger = "RemoteTrigger";
};

class AEXT_EOD_Base_Fake_Ammo: FakeAmmo {
    soundActivation[] = {"", 0, 0, 0};
    soundDeactivation[] = {"", 0, 0, 0};
    triggerWhenDestroyed = 1;
    ACE_explodeOnDefuse = 0.02;
    ACE_minedetector_detectable = 1;
    //ACE_explosives_defuseObjectPosition[] = {-1.415, 0, 0.12};
    ACE_explosives_size = 0;
    soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_1", 0.8, 1, 40};
    mineTrigger = "RemoteTrigger";
    ACE_explosives_magazine = "TrainingMine_Mag";

    explosionEffects="EffectMOPMS";
    craterEffects="";
    defaultMagazine="TrainingMine_Mag";
    hit=1;
    indirectHit=0;
    indirectHitRange=0;
    suppressionRadiusHit=0;
    mineInconspicuousness=30;
    mineCanBeReactivated=0;
    minDamageForCamShakeHit=1.55;
    class CamShakeExplode
    {
        power=0;
        duration=0.2;
        frequency=20;
        distance=0;
    };
    class CamShakeHit
    {
        power=0;
        duration=0.2;
        frequency=20;
        distance=1;
    };
};

class AEXT_EOD_ied01_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied01_Magazine";
};
class AEXT_EOD_ied01_Command_Ammo: AEXT_EOD_ied01_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied01_Range_Ammo: AEXT_EOD_ied01_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};
class AEXT_EOD_ied01_Fake_Ammo: AEXT_EOD_Base_Fake_Ammo {
};

class AEXT_EOD_ied02_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied02_Magazine";
};
class AEXT_EOD_ied02_Command_Ammo: AEXT_EOD_ied02_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied02_Range_Ammo: AEXT_EOD_ied02_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};

class AEXT_EOD_ied03_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied03_Magazine";
};
class AEXT_EOD_ied03_Command_Ammo: AEXT_EOD_ied03_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied03_Range_Ammo: AEXT_EOD_ied03_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};

class AEXT_EOD_ied04_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied04_Magazine";
};
class AEXT_EOD_ied04_Command_Ammo: AEXT_EOD_ied04_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied04_Range_Ammo: AEXT_EOD_ied04_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};

class AEXT_EOD_ied05_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied05_Magazine";
};
class AEXT_EOD_ied05_Command_Ammo: AEXT_EOD_ied05_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied05_Range_Ammo: AEXT_EOD_ied05_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};

class AEXT_EOD_ied06_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied06_Magazine";
};
class AEXT_EOD_ied06_Command_Ammo: AEXT_EOD_ied06_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied06_Range_Ammo: AEXT_EOD_ied06_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};

class AEXT_EOD_ied07_Remote_Ammo: AEXT_EOD_Base_Remote_Ammo {
    ACE_explosives_magazine = "AEXT_EOD_ied07_Magazine";
};
class AEXT_EOD_ied07_Command_Ammo: AEXT_EOD_ied07_Remote_Ammo {
    mineTrigger = "RemoteTrigger";
};
class AEXT_EOD_ied07_Range_Ammo: AEXT_EOD_ied07_Remote_Ammo {
    mineTrigger = "RangeTrigger";
};
