#include "main.h"

/**
 * _pow_recursion - calculates x to the power of y
 * @x: the given number
 * @y: the exponent
 * Return: x to the power of y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y == 0)
		return (result);
	else if (y < 0)
		return (-1);
	result = x * _pow_recursion(x, (y - 1));
	return (result);
}
