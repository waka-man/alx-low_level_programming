#include <stdio.h>

/**
 * main - This is a stupid description
 * Return: I can't believe I have to explain this
 */

int main(void)
{
	char mychar;
	int myint;
	long mylong;
	long long mydlong;
	float myfloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(mychar));
	printf("Size of an int: %ld byte(s)\n", sizeof(myint));
	printf("Size of a long int: %ld byte(s)\n", sizeof(mylong));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(mydlong));
	printf("Size of a float: %ld byte(s)\n", sizeof(myfloat));

	return (0);
}
