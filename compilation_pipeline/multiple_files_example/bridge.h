#ifndef BRIDGE_H
#define BRIDGE_H 

typedef enum {
	NONE,
	NORMAL,
	SQUARED
} average_type_t;

//Function declaration
double avg(int*, int, average_type_t);
#endif

