#include <stdio.h>

int main(void) {
	int x = 123;
	printf("The value before the change: %d\n", x);

	int* p = &x;
	*p = 456;
	printf("the value after the change: %d\n", x);
}
