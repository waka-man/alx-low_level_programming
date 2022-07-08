#include "main.h"

/**
 * _isupper - checks if a given char is upper or lower case
 * @c: character to be evaluated
 * Return: 1 is character is upper case and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
