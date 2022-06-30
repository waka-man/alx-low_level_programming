#include <stdio.h>

int main()
{
	char mychar;
	int myint;
	long mylong;
	long long mydlong;
	float myfloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(mychar));
	printf("Size of a int: %ld byte(s)\n", sizeof(myint));
	printf("Size of a long: %ld byte(s)\n", sizeof(mylong));
	printf("Size of a long long: %ld byte(s)\n", sizeof(mydlong));
	printf("Size of a float: %ld byte(s)\n", sizeof(myfloat));

	return 0;
}
