#include "main.h"

/**
 * print_sign - checks and returns the signs of integers
 * @n: one input integer to be evaluated
 * Return: 1 for positive, 0 for zero, and -1 for negative
 */
int print_sign(int n)
{
	char *add_sig = "+";
	char *subt_sig = "-";
	char *zero = "0";

	if (n > 0)
	{
		_putchar(*add_sig);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(*zero);
		return (0);
	}
	else
	{
		_putchar(*subt_sig);
		return (-1);
	}
}
