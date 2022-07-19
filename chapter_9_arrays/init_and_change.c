#include <stdio.h>

int main(void) {
	int myarr[5] = {10,20,30,40,50}; // init the array
	
	for (int i = 0; i < 5; i++ )
	{
		printf("%d ", myarr[i]);
	}

	printf("\n");
	myarr[0] = 100; /* change value of first element */
	myarr[2] = 1337; // change third element
			 //
	for (int i = 0; i < 5; i++ ) {
		printf("%d ", myarr[i]);
	}
}


