int* get_integer(void) {
	int var = 10;
	return &var;
}

int main(int argc, char** argv) {
	int* ptr = get_integer();
	*ptr = 5;
	return 0;
}

/* The get_integer function returns an address to the local variable, var, which
 * has been declared in the scope of the get_integer function. The get_integer
 * function returns the address of the local variable. Then, the main function tries
 * to dereference the received pointer and access the memory region behind. */
