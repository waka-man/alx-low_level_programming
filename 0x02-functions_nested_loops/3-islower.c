#include "main.h"

/**
 * _islower - checks if a character is a lower case
 * @c: one character input to be evaluated
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
