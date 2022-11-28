#include "script_component.hpp"
params ["_logic", "_units", "_activated"];

if (!_activated) exitwith {};

{
    private _eh = _x addEventHandler ["incomingMissile", {
        params ["_target", "", "", "", "_missile"];
        [_target, _missile] call FUNC(handleMissile);
    }]
    _x setVariable ["trophy_system_eh", _eh]
} forEach _units;
