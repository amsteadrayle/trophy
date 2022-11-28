class CfgVehicles {
    class Logic;
    class Module_F : Logic {
        class AttributesBase {
            class Default;
            class Edit;              // Default edit box (i.e., text input field)
            class Combo;             // Default combo box (i.e., drop-down menu)
            class Checkbox;          // Default checkbox (returned value is Boolean)
            class CheckboxNumber;    // Default checkbox (returned value is Number)
            class ModuleDescription; // Module description
            class Units;             // Selection of units on which the module is applied
        };
        // Description base classes, for more information see below
        class ModuleDescription;
    };
    class rail_ModuleTrophySystem : Module_F {
        author = "AmsteadRayle";
        displayName = "Trophy System";
        category = "ObjectModifiers";
        function = "fnc_moduleTrophySystem";
        scope = 2;
        isGlobal = 1;
        class Arguments {};
        class ModuleDescription: ModuleDescription {
            description = "Trophy system on a vehicle";
            sync[] = {"AnyVehicle"};
        };
    };
};
