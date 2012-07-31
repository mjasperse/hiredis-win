#include "hiredis.h"
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

BOOL WINAPI DllMain( HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved )
{
	WSADATA wsa;
    switch ( fdwReason )
    {
        case DLL_PROCESS_ATTACH:
            return WSAStartup(MAKEWORD(2,2),&wsa) == 0;
        case DLL_PROCESS_DETACH:
            WSACleanup();
        default:
            return TRUE;
    }
}

