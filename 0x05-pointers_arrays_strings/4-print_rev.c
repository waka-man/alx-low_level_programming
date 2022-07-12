#include "main.h"

/**
 * print_rev - takes string pointer as a param and sends the reversed
 * string to standard output
 * @*s: the pointer to the string value
 * Return: nothing is returned
 */

void print_rev(char *s)
{
	int index = 0;
	int element_count = 0;
	int rev_index;

	while (s[index] != '\0')
	{
		element_count++;
		index++;
	}

	for (rev_index = (element_count - 1); rev_index >= 0; rev_index--)
	{
		_putchar(s[rev_index]);
	}
	_putchar('\n');
}
