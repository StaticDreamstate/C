#include <stdio.h>
#include <stdlib.h>

void fill(char* ptr) {
	ptr[0] = 'H';
	ptr[1] = 'e';
	ptr[2] = 'l';
	ptr[3] = 'l';
	ptr[4] = 'o';
	ptr[5] = 0;
}

int main(int argc, char** argv) {
	void* gptr = malloc(10 * sizeof(char));
	char* ptr = (char*)gptr;
	fill(ptr);
	printf("%s!\n", ptr);
	free(ptr);
	return 0;
}

/* Note that the local pointer variables, gptr and ptr, are allocated from the Stack.
 * These pointers need memory to store their values, and this memory comes
 * from the Stack segment. But the address that they are pointing to is inside the
 * Heap segment. This is the theme when working with Heap memories. You have
 * local pointers which are allocated from the Stack segment, but they are actually
 * pointing to a region allocated from the Heap segment. */
