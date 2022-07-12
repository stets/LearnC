#include <stdio.h>

int main(void) {
	printf("for loop first:\n");

	for ( int i = 0; i < 5; i++) {
		printf("For loop iteration: %d\n", i);
	}

	printf("next, a while loop:\n");

	int x = 0;
	while (x < 5) {
		printf("While loop iteration: %d\n", x);
		x++;
	}
}
