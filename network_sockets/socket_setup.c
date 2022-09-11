#if defined(_WIN32)

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x600
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

#else

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>

#endif 

#include <stdio.h>

int main(void) {
	
	#if defined(_WIN32)
		
		WSADATA d;
		if (WSAStartup(MAKEWORD(2,2), &d)) {
			fprintf(stderr, "Failed to initialize.\n");
			return 1;
		}

	#endif

	puts("Ready to use socket API");

	#if defined(_WIN32)
		WSACleanup();
	#endif

	return 0;
}
