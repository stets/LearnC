#include <stdio.h>

int main(void) {
	int arr[5] = {10,20,30,40,50};
	int *p = arr; /* same as *p = &arr[0]; is the first element */
	printf("the pointed to value is %d\n", *p);
	// wowzers, we increment!!
	p += 2;
	printf("the pointed to value after p++ is: %d\n", *p);
}

