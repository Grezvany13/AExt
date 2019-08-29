#include "script_component.hpp"

// if !(GVAR(enable)) exitWith {};

["ace_interactMenuOpened", {
    //Show defuse actions on CfgAmmos (allMines), when using Talon:
    _this call AEXT_fnc_EH_ACE_Defuse;
}] call CBA_fnc_addEventHandler;
