#include "script_component.hpp"

params ["_unit"];

// if !(GVAR(enable)) exitWith {};

// EOD Suit Interface Event Handlers
_unit addEventHandler ["Take", {[_this] call AEXT_EOD_fnc_EH_Take;}];
_unit addEventHandler ["Put", {[_this] call  AEXT_EOD_fnc_EH_Put;}];
//_unit addEventHandler ["Respawn", {[] call  AEXT_EOD_fnc_EH_Respawn;}];
//_unit addEventHandler ["Killed", {[] call  AEXT_EOD_fnc_EH_Killed;}];

// EOD Suit Damage Event Handler
_unit addEventHandler ["HandleDamage", {_degats = [_this] call AEXT_EOD_fnc_EX_Protection; _degats}];

_unit call FUNC(init);
