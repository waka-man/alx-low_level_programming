#include "main.h"

/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: the string to be evaluated
 * Return: the integer length value of the evaluated string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = 1 + _strlen_recursion(s + 1);
		return (len);
	}
}
