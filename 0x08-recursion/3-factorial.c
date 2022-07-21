#include "main.h"

/**
 * factorial - a function that calculates the factorial of a given number n
 * @n: the given number
 * Return: the factorial, and -1 if n < 0 to indicate error
 */

int factorial(int n)
{
	int result = 1;

	if (n == 0)
		return (result);
	else if (n < 0)
		return (-1);
	result = n * factorial(n - 1);
	return (result);
}
