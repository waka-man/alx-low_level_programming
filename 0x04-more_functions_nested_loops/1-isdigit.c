#include "main.h"

/**
 * _isdigit - checks if a given char is a digit or not
 * @c: character to be evaluated
 * Return: 1 if character is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
