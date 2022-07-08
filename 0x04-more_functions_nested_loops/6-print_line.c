#include "main.h"

/**
 * print_line - prints line based on input n
 * @n: numer of times the '_' character is printed to make a line
 * Return: nothing is returned
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
