#include <stdlib.h>
#include "declarations.h"

int reverse(struct list_t* source, struct list_t* dest) {
	list_clear(dest);
	for (size_t i = list_size(source) - 1; i >= 0; i--) {
		int item;
		if(list_get(source, i, &item)) {
			return -1;
		}
		list_add(dest, item);
	}
	return 0;
}

int main(int argc, char** argv) {
	struct list_t* list1 = list_malloc();
	struct list_t* list2 = list_malloc();
	// Construction
	list_init(list1);
	list_init(list2);

	list_add(list1, 4);
	list_add(list1, 6);
	list_add(list1, 1);
	list_add(list1, 5);
	list_add(list2, 9);
	reverse(list1, list2);

	list_print(list1);
	list_print(list2);
	// Destruction
	list_destroy(list1);
	list_destroy(list2);
	free(list1);
	free(list2);
	return 0;
}

/* As you can see in the preceding code box, we wrote the main and reverse
 * functions only based on the things declared in the header file. In other words,
 * these functions are using only the public API (or public interface) of the
 * List class; the declarations of the attribute structure list_t and its behavior
 * functions. This example is a nice demonstration of how to break the dependencies
 * and hide the implementation details from other parts of the code. */
