#include <stdio.h>

int main(void) {
	char mychar;
	mychar = 97;

	char anotherChar = 101;

	printf("%c", mychar); 

	printf("%c", anotherChar);
	printf("\n");

	printf("The size of mychar character object is %zi byte(s).", sizeof(mychar));
}
