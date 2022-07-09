#include <stdio.h>

int main(void) {
	
	int x;
	x = 10; // decimal constant
	int y;
	y = 012; // octal constant
	int z;
	z = 0XA; // hexadecimal constant
		 //
	printf("The values are x: %d y: %o and z: %x", x, y, z);
	printf("\n The size of an integer x is %zi byte(s)", sizeof(x));
}
