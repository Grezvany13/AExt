class Logic;
class Module_F: Logic
{
	class ModuleDescription
	{
		class AnyPlayer;
		class AnyBrain;
		class EmptyDetector;
	};
};
class AEXT_EOD_Module_Base : Module_F
{
	mapSize = 1;
	author = "Grezvany13";
	vehicleClass = "Modules";
	category = "AEXT - EOD";
	side = 7;

	scope = 1;				// Editor visibility; 2 will show it in the menu, 1 will hide it.
	scopeCurator = 1;		// Curator visibility; 2 will show it in the menu, 1 will hide it.

	displayName = "AEXT - EOD Module Base";	// Name displayed in the menu
	// icon = "";		// Map icon. Delete this entry to use the default icon
	// picture = "";
	// portrait = "";

	function = "";			// Name of function triggered once conditions are met
	functionPriority = 1;	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	isGlobal = 2;			// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
	isTriggerActivated = 0;	// 1 for module waiting until all synced triggers are activated
	isDisposable = 0;		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	// curatorInfoType = "RscDisplayAttributeModuleNuke";	// Menu displayed when the module is placed or double-clicked on by Zeus

    dlc = "AEXT";

	class Arguments {};
	class ModuleDescription: ModuleDescription
	{
		description = "AEXT - EOD Module Base";
	};
};
