#include "main.h"

/**
 * _abs - find the absolute value of an integer
 * @i: integer value to be evaluated
 * Return: the absolute value of the input integer
 */

int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
