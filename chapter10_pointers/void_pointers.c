#include <stdio.h>


int main(void) {
	int x = 123;
	int *ip = &x; /* get address of integer */
	void *vp;
	vp = ip; /* void pointer gets value of integer pointer */
	printf("the pointed to value is: %d\n", *((int *)vp));
}
