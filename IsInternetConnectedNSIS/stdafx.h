// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ISINTERNETCONNECTEDNSIS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ISINTERNETCONNECTEDNSIS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ISINTERNETCONNECTEDNSIS_EXPORTS
#define ISINTERNETCONNECTEDNSIS_API __declspec(dllexport)
#else
#define ISINTERNETCONNECTEDNSIS_API __declspec(dllimport)
#endif

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <WinInet.h>


// TODO: reference additional headers your program requires here
#include "nsis\pluginapi.h"

#pragma comment(lib, "pluginapi.lib")
#pragma comment(lib, "wininet.lib")