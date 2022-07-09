#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - FInds the largest prime factor of the given number
 * Return: 0 for success, after printing the prime factor on console
 */

int main(void)
{
	long num = 612852475143;
	int i;
	int max;

	while (num % 2 == 0)
	{
		max = 2;
		num = num / 2;
	}
	for (i = 3; i < sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		max = num;
	}
	printf("%d\n", max);
	return (0);
}
