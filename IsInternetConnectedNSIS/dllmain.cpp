// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

#ifdef __cplusplus
extern "C" {
#endif

	BOOL APIENTRY DllMain(HMODULE hModule,
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

	void ISINTERNETCONNECTEDNSIS_API IsInternetConnected(HWND hwndParent, int string_size, TCHAR *variables, stack_t **stacktop, extra_parameters *extra) {
		DWORD dwFlags;
		int ret;

		do {
			if (InternetGetConnectedState(&dwFlags, 0) == TRUE) {
				ret = 1;
				break;
			}

			if (::InternetAttemptConnect(0) != ERROR_SUCCESS) {
				ret = 0;
				break;
			}

			if (InternetGetConnectedState(&dwFlags, 0) == TRUE)
				ret = 1;
			else
				ret = 0;
		} while (0);

		pushint(ret);
		return;
	}

#ifdef __cplusplus
}
#endif
