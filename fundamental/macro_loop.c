#include <stdio.h>

#define PRINT(a) printf("%d\n", a);
#define LOOP(v, s, e) for(int v = s; v <= e; v++) {
#define ENDLOOP }

int main(int argc, char** argv) {
	LOOP(counter, 1, 10);
		PRINT(counter);
	ENDLOOP;
	return 0;
}

/* In the main function, we just used a different and not C-looking
 * set of instructions to write our algorithm. Then after preprocessing,
 * we got a fully functional and correct C program. This is an important
 * application of macros; to define a new domain specific language (DSL) 
 * and write code using it. */

