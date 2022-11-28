params ["_vehicle", "_missile"]

_delete = [_target, _missile] spawn {
    params ["_target", "_missile"];
    waitUntil {
        [_target, _missile] call CBA_fnc_getdistance < intercept_distance
    };
    if (alive _missile) then {
        _boom = explosion_class createvehicle position _missile;
        deletevehicle _missile;
    };
};
