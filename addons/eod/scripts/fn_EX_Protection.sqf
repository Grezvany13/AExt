_data = _this select 0;
_unit = _data select 0;
_selectionName = _data select 1;
_damage = _data select 2;
_source = _data select 3;
_projectile = _data select 4;

_explosiveTypeList = [
    "APERSBoundingMine_Range_Ammo",
    "APERSMine_Range_Ammo",
    "APERSTripMine_Wire_Ammo",
    "AT_Mine_155mm_AMOS_range",
    "ATMine_Range_Ammo",

    "DemoCharge_Remote_Ammo",
    "DemoCharge_Remote_Ammo_Scripted",
    "ClaymoreDirectionalMine_Remote_Ammo_Scripted",
    "Bomb_04_F",
    "Bomb_03_F",

    "GrenadeHand_stone",
    "FuelExplosionBig",
    "FuelExplosion",
    "DirectionalBombCore",
    "ClaymoreDirectionalMine_Remote_Ammo",

    "IEDUrbanSmall_Remote_Ammo",
    "IEDUrbanBig_Remote_Ammo",
    "IEDLandSmall_Remote_Ammo",
    "IEDLandBig_Remote_Ammo",
    "GrenadeHand",
    "mini_Grenade",

    "UWMine_155mm_AMOS_range",
    "SLAMDirectionalMine_Wire_Ammo",
    "SatchelCharge_Remote_Ammo_Scripted",
    "SatchelCharge_Remote_Ammo",
    "PipeBombBase"
];

if (
    (_projectile in _explosiveTypeList)
    && (uniform player isEqualTo "EOD_Uniform")
    && (vest player isEqualTo "EOD_SUIT_vest")
    && (headgear player isEqualTo "EOD9_HELMET")
    && (!Running_Explosion)
) then {
    Running_Explosion = true;
    _damage = (0.3 + random 0.5);

    systemchat "GET DOWN !!!";

    waituntil {
        isTouchingGround player
    };
    Running_Explosion = false;
};

diag_log _projectile;
_damage
