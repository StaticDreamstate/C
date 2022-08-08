//The code below generates a segmentation fault error.

#include <stdio.h>

int* create_an_integer(int default_value) {
	int var = default_value;
	return &var;
}

int main(void) {
	int* ptr = NULL;
	ptr = create_an_integer(10);
	printf("%d\n", *ptr);
	return 0;
}

/* The ptr pointer is dangling and points to an already
 * deallocated portion of memory that was known to be 
 * the memory place of the variable, var. */
