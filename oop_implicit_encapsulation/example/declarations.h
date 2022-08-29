#ifndef DECLARATIONS_H
#define DECLARATIONS_H

// This structure keeps all the attributes
// related to a car object.

typedef struct {
	char name[32];
	double speed;
	double fuel;
} car_t;

// These functions declarations are 
// the behaviors of a car object

void car_construct(car_t*, const char*);
void car_destruct(car_t*);
void car_accelerate(car_t*);
void car_brake(car_t*);
void car_refuel(car_t*, double);

#endif

/* Note that the car_t attribute structure is not a class itself. It only contains the
 * attributes of the Car class. The declarations all together make the implicit Car
 * class. */
