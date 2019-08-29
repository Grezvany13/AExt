params ["_interactionType"];

systemchat "run EH_ACE_Defuse";

// Ignore self-interaction menu or mounted vehicle interaction
// For performance reasons only add PFH if player has a defusal kit
// If player somehow gets a defusal kit during keyDown, they will just have to reopen menu
if (
    _interactionType != 0
    || {vehicle ACE_player != ACE_player}
    || {!((getConnectedUAV ACE_player) isKindOf "Talon_Base")}                // unit is not controlling Talon
) exitWith {};

[{
    params ["_args", "_pfhID"];
    _args params ["_setPosition", "_addedHelpers", "_minesHelped"];

    if (!ACE_interact_menu_keyDown) then {
        {deleteVehicle _x} forEach _addedHelpers;
        [_pfhID] call CBA_fnc_removePerFrameHandler;
    } else {
        // Prevent Rare Error when ending mission with interact key down
        private _player = ACE_player;
        if (isNull _player) exitWith {};
        private _playerPos = getPosASL getConnectedUAV _player;     // get position of Talon

        // Rescan if player has moved more than 5 meters from last position
        if (_playerPos distanceSqr _setPosition > 25) then {
            private _cfgAmmo = configFile >> "CfgAmmo";
            {
                if (_x distanceSqr _player < 225 && {!(_x in _minesHelped)} && {!(getModelInfo _x select 0 isEqualTo "empty.p3d")}) then {
                    private _config = _cfgAmmo >> typeOf _x;
                    private _size = getNumber (_config >> "ACE_size");
                    private _defuseClass = ["ACE_DefuseObject", "ACE_DefuseObject_Large"] select (_size == 1);
                    private _defusePos = getArray (_config >> "ACE_defuseObjectPosition");
                    if (_defusePos isEqualTo []) then {
                        _defusePos = [0, 0, 0];
                    };

                    private _helper = _defuseClass createVehicleLocal [0, 0, 0];

                    _helper attachTo [_x, _defusePos];
                    _helper setVariable ["ACE_Explosive", _x];
                    _addedHelpers pushBack _helper;
                    _minesHelped pushBack _x;
                };
            } forEach allMines;

            _args set [0, _playerPos];
        };
    };
}, 0.5, [getPosASL getConnectedUAV ACE_player vectorAdd [-100, 0, 0], [], []]] call CBA_fnc_addPerFrameHandler;
