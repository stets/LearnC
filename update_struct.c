#include <stdio.h>

struct Person {
	char name[64];
	int age;
};

void updateStruct(struct Person *p, int age)
{
	p->age = age;
}

int main(int argc, char **argv) {
	struct Person bobSaget;
	updateStruct(&bobSaget, 100);
}
