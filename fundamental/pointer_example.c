int main(int argc, char** argv) {
	int var = 100;
	int *ptr = 0;			//null pointer
	ptr = &var;				//addr of var
	*ptr = 200;				//same as var = 200
	return 0;
}
