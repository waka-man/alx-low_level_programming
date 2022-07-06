#include "main.h"

/**
 * print_last_digit - prints the last digit of an input integer
 * @i: input integer to be evaluated
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int val;

	val = (i % 10);

	if (val < 0)
	{
		val = (-1 * val);
	}
	_putchar(val + '0');
	return (val);
}
