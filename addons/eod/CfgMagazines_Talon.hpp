class CA_Magazine: Default
{
	scope=1;
	value=1;
	displayName="";
	model="\A3\weapons_F\ammo\mag_univ.p3d";
	picture="";
	modelSpecial="";
	useAction=0;
	useActionTitle="";
	reloadAction="";
	ammo="";
	count=30;
	type=256;
	initSpeed=900;
	selectionFireAnim="zasleh";
	nameSound="magazine";
	maxLeadSpeed=23;
	weaponpoolavailable=1;
	mass=8;
};
class VehicleMagazine: CA_Magazine
{
	type=0;
	reloadAction="";
	maxLeadSpeed=100;
	weaponPoolAvailable=0;
};
class TalonARM_Fake_Mag: VehicleMagazine
{
	displayName="TalonARM";
	displayNameShort="Talon ARM";
	count=1000;
	ammo="TalonARM_FakeAmmo";
	initSpeed=50;
};
