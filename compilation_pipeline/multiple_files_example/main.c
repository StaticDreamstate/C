#include <stdio.h>
#include "bridge.h"

int main(int argc, char** argv) {
	//Array declaration
	int array[5];

	//Filling the array
	array[0] = 10;
	array[1] = 3;
	array[2] = 5;
	array[3] = -8;
	array[4] = 9;

	//Calculating the averages usinf the 'avg' function
	double average = avg(array, 5, NORMAL);
	printf("The avegare: %f\n", average);
	average = avg(array, 5, SQUARED);
	printf("The squared average: %f\n", average);
	
	return 0;
}
