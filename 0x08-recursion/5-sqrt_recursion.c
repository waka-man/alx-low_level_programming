#include "main.h"

/**
 * _sqrt - helper function to check if the given number
 * has a ntuaral square root
 * @n: the given number
 * @real_sqrt: to count the steps
 * Return: the natural square root, -1 if no
 */

int _sqrt(int n, int real_sqrt)
{
	if (real_sqrt < 1)
		return (-1);
	else if (real_sqrt * real_sqrt == n)
		return (real_sqrt);
	else
		return (_sqrt(n, real_sqrt - 1));
}

/**
 * _sqrt_recursion - calculates the natural sqrt of a number recursively
 * @n: the given number
 * Return: the natural sqrt of the number, -1 if no
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, (n + 1) / 2));
}
