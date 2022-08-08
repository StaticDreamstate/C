#define ADD(a, b) a+b //function-like macro

int main(int argc, char** argv) {
	int x = 2;
	int y = 3;
	int z = ADD(x, y); //Use -E on clang or gcc to dump the macro expansion.
	return 0;
}
