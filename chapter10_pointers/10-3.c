#include <stdio.h>


int main(void) {
	int arr[5] = {10,20,30,40,50};

	int *p = arr; // p* now points at first array element
	int *second = arr;
	printf("The first array element has the address: %p\n", p);
	printf("The first array element is: %d\n", *p);
	printf("The second array element has the address: %p\n", &second);
	printf("The second array element is: %d\n", p[1]);
}
