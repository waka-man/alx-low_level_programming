#include "main.h"

/**
 * _print_rev_recursion - prints a given string in reverse, using recursion
 * @s: the string to be reversed
 * Return: nothing is returned
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
		return;
	_putchar(*s);
}
