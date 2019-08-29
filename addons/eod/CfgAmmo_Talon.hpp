class EODS_ShellBase: FakeAmmo
{
	soundHit[] = {};
	supersonicCrackNear[] = {};
	supersonicCrackFar[] = {};
	CraterEffects="";
	CraterWaterEffects="";
	ExplosionEffects="";
	visibleFire=0;
	audibleFire=0;
	timeToLive=360;
	muzzleEffect="";
	caliber=34;
	whistleOnFire=0;
	class HitEffects {};
	soundFakeFall0[]= {};
	soundFakeFall1[]= {};
	soundFakeFall2[]= {};
	soundFakeFall3[]= {};
	soundFakeFall[]= {};
};
class TalonARM_FakeAmmo_base: FakeAmmo
{
	soundHit[]= {};
	supersonicCrackNear[]= {};
	supersonicCrackFar[]= {};
	CraterEffects="";
	CraterWaterEffects="";
	ExplosionEffects="";
	visibleFire=0;
	audibleFire=0;
	timeToLive=5;
	muzzleEffect="";
	model="";
	caliber=34;
	whistleOnFire=0;
	class HitEffects {};
	soundFakeFall0[]= {};
	soundFakeFall1[]= {};
	soundFakeFall2[]= {};
	soundFakeFall3[]= {};
	soundFakeFall[]= {};
};
class TalonARM_FakeAmmo: TalonARM_FakeAmmo_base
{
	hit=0;
	indirectHit=0;
	indirectHitRange=0;
	typicalSpeed=5;
	explosive=0;
	cost=0;
	muzzleEffect="";
	model="";
	CraterEffects="";
	ExplosionEffects="";
	whistleDist=0;
	artilleryLock=0;
	thrust=0;
	timeToLive=2;
	airFriction=0;
	sideairFriction=0;
	class CamShakeExplode
	{
		power="";
		duration="";
		frequency=0;
		distance="";
	};
	class CamShakeHit
	{
		power=0;
		duration="";
		frequency=0;
		distance=0;
	};
	class CamShakeFire
	{
		power="";
		duration="";
		frequency=0;
		distance="";
	};
	class CamShakePlayerFire
	{
		power=0;
		duration=0;
		frequency=0;
		distance=0;
	};
};
