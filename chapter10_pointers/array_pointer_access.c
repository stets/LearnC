#include <stdio.h>

int main(void) {
	int arr[5] = {10,20,30,40,50};
	printf("before the changes:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	int *p;
	p = &arr[0]; // address of first element
	*p = 11; // change its value //
	p = &arr[4]; // get address of last value
	*p = 55; /* change its value */

	printf("\nafter the changes:\n");
	for (int i = 0; i < 5; i++ )
	{
		printf("%d ", arr[i]);
	}
}
	
