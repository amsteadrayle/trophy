#define MAINPREFIX z
#define PREFIX rail_trophy_system

#include "script_version.hpp"

#define VERSION         MAJOR.MINOR
#define VERSION_STR     MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR      MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION_PLUGIN  MAJOR.MINOR.PATCHLVL.BUILD

#define REQUIRED_VERSION 2.10

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(Trophy System - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(Trophy System - COMPONENT)
#endif
