class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
    class Wide;
    class Medium;
    class Narrow;
};

class CfgVehicles {
    // imports
    class B_UAV_AI;
    class LandVehicle;

    // IEDs
    #include "CfgVehicles_IED.hpp"
    // EOD Suit
    #include "CfgVehicles_EODSuit.hpp"

    // EOD Suit Helmet Light
    #include "CfgVehicles_HelmetLight.hpp"
    // EOD Talon
    #include "CfgVehicles_Talon.hpp"

    // Modules
    #include "CfgVehicles_Modules.hpp"
};
