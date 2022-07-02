#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - just a main function
  * Return: return 0
  */


int main(void)
{
	int n;
	int last_digit;
	char my_char[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", my_char, n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("%s %d is %d and is 0\n", my_char, n, last_digit);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", my_char, n, last_digit);
	}
	return (0);
}
