#include <stdio.h>

int main(void) {
	int x = 123;

	int *mypointer = &x;

	printf("The pointer address is: %d", *mypointer);
}
