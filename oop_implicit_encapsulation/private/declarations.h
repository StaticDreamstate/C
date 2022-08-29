#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include <unistd.h>
// The attribute structure with no disclosed attribute
struct list_t;
// Allocation function
struct list_t* list_malloc();
// Constructor and destructor functions
void list_init(struct list_t*);
void list_destroy(struct list_t*);
// Public behavior functions
int list_add(struct list_t*, int);
int list_get(struct list_t*, int, int*);
void list_clear(struct list_t*);
size_t list_size(struct list_t*);
void list_print(struct list_t*);
#endif

/* What you see above is the way that we make the attributes private. 
 * If another source file, such as the one that contains the main function, 
 * includes the preceding header, it'll have no access to the attributes inside 
 * the list_t type. The reason is simple. The list_t is just a declaration without
 * a definition, and with just a structure declaration, you cannot access the fields 
 * of the structure. You cannot even declare a variable out of it. This way, we 
 * guarantee the information-hiding. This is actually a great achievement. */
