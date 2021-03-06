#ifndef APPVERSION_H_INCLUDED
#define APPVERSION_H_INCLUDED

#define STR(s) #s
#define STRINGIFY(s) STR(s)

#define APP_VERSION_MAJOR    1
#define APP_VERSION_MINOR    3
#define APP_VERSION_BUILD    0
#define APP_VERSION_RELEASE  0
#define APP_VERSION_BETA     0

// Take care of the leading zero
#if APP_VERSION_MINOR < 10
#define APP_VERSION_MINOR_FIXED  "0"
#else
#define APP_VERSION_MINOR_FIXED
#endif

#if APP_VERSION_BUILD < 10
#define APP_VERSION_BUILD_FIXED  "0"
#else
#define APP_VERSION_BUILD_FIXED
#endif

#if APP_VERSION_RELEASE < 10
#define APP_VERSION_RELEASE_FIXED "0"
#else
#define APP_VERSION_RELEASE_FIXED
#endif
#if APP_VERSION_BETA < 10
#define APP_VERSION_BETA_FIXED  "0"
#else
#define APP_VERSION_BETA_FIXED
#endif

#define APP_VERSION           APP_VERSION_MAJOR,APP_VERSION_MINOR,APP_VERSION_RELEASE,APP_VERSION_BETA
#if APP_VERSION_BETA
#define APP_BETA_PREFIX	" Beta "
#else
#define APP_BETA_PREFIX "."
#endif

#define APP_COPYRIGHT_STR     "Copyright (C) 2015-2016 Blackrock Microsystems"
#if APP_VERSION_BETA > 0
#define APP_VERSION_STR       STRINGIFY(APP_VERSION_MAJOR) "." APP_VERSION_MINOR_FIXED STRINGIFY(APP_VERSION_MINOR) "." APP_VERSION_BUILD_FIXED STRINGIFY(APP_VERSION_BUILD) "." APP_VERSION_BETA_FIXED STRINGIFY(APP_VERSION_BETA)
#else
#define APP_VERSION_STR       STRINGIFY(APP_VERSION_MAJOR) "." APP_VERSION_MINOR_FIXED STRINGIFY(APP_VERSION_MINOR) "." APP_VERSION_BUILD_FIXED STRINGIFY(APP_VERSION_BUILD) 
#endif


#endif // include guard
