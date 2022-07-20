#include "main.h"

/**
 * _puts_recursion - just like puts but uses recursion instead
 * @s: the string to print
 * Return: nothing is returned
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
