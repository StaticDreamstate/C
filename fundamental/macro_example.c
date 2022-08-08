#define ABC 5

int main(int argc, char** argv) {
	int x = 2;
	int y = ABC;
	int z = x+y; //Use -E on clang or gcc to dump the macro expansion.
	return 0;
}


