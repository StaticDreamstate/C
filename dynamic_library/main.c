//When it comes to using the static library, we need to write 
//a new source file that includes the library's API and make use 
//of its functions.

#include <stdio.h>
#include "geometry.h" //API of the static library.

int main(int argc, char** argv) {
	cartesian_pos_2d_t cartesian_pos;
	cartesian_pos.x = 100;
	cartesian_pos.y = 200;
	polar_pos_2d_t polar_pos = convert_to_2d_polar_pos(&cartesian_pos);
	printf("Polar position: \n Length: %f, Theta: %f (deg)\n", polar_pos.length, polar_pos.theta);
	return 0;
}
