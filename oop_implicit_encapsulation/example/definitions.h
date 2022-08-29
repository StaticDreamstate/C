#include <string.h>
#include "declarations.h"

void car_construct(car_t* car, const char* name) {
	strcpy(car->name, name);
	car->speed = 0.0;
	car->fuel = 0.0;
}

void car_destruct(car_t* car) {
	//Nothing to do here.
}

void car_accelerate(car_t* car) {
	car->speed += 0.05;
	car->fuel -= 1.0;
	if (car->fuel < 0.0) {
		car->fuel = 0.0;
	}
}

void car_brake(car_t* car) {
	car->speed -= 0.07;
	if (car->speed < 0.0) {
		car->speed = 0.0;
	}
	car->fuel -= 2.0;
	if (car->fuel < 0.0) {
		car->fuel = 0.0;
	}
}

void car_refuel(car_t* car, double amount) {
	car->fuel = amount;
}

/* As you can see, all the functions accept a car_t pointer as their first argument. 
 * This allows the function to read and modify the attributes of an object. If a function 
 * is not receiving a pointer to an attribute structure, then it can be considered as an 
 * ordinary C function that does not represent an object's behavior. */
