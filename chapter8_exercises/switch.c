#include <stdio.h>

int main(void) {
	int x = 2;
	switch (x)
	{
		case 1:
			printf("The value is 1\n");
			break;
		case 2:
			printf("The value is 2\n");
			break;
		case 3:
			printf("The value is 3\n");
			break;
		default:
			printf("None of the values match\n");
			break;
	}
}


