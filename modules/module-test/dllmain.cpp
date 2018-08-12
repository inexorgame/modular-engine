// Windows specific code
#ifdef WIN32

#include <windows.h>
#include "module-test.hpp"

// DLL main function
BOOL APIENTRY DllMain( HMODULE hModule,
						DWORD  ul_reason_for_call,
						LPVOID lpReserved
						)
{
	switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
}

#endif

// TODO: Add linux code here!
// TODO: Add Mac OS code here!
