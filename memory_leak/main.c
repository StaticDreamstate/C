// Simple test for valgrind

#include <stdlib.h> // For heap memory functions
	int main(int argc, char** argv) {
	char* ptr = (char*)malloc(16 * sizeof(char));
	//free(ptr); --> Memory leak spot
	return 0;
}
