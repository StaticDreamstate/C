#include "basic.h"
#include <ctype.h>

int main(void) {

	#if defined(_WIN32)
		
		WSADATA d;
		
		if (WSAStartup(MAKEWORD(2, 2), &d)) {
			fprintf(stderr, "Failed to initialize.\n");
			return 1;
		}

	#endif

	puts("Configuring local address...");
	struct addrinfo hints;
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_DGRAM;
	hints.ai_flags = AI_PASSIVE;
	struct addrinfo *bind_address;
	getaddrinfo(0, "8080", &hints, &bind_address);

	puts("Creating socket...");
	SOCKET socket_listen;
	socket_listen = socket(bind_address->ai_family,
	bind_address->ai_socktype, bind_address->ai_protocol);

	if (!ISVALIDSOCKET(socket_listen)) {
		fprintf(stderr, "socket() failed. (%d)\n", GETSOCKETERRNO());
		return 1;
	}

	puts("Binding socket to local address...");

	if (bind(socket_listen, bind_address->ai_addr, bind_address->ai_addrlen)) {
		fprintf(stderr, "bind() failed. (%d)\n", GETSOCKETERRNO());
		return 1;
	}

	freeaddrinfo(bind_address);

	fd_set master;
	FD_ZERO(&master);
	FD_SET(socket_listen, &master);
	SOCKET max_socket = socket_listen;
	puts("Waiting for connections...");


