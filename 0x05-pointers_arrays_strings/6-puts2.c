#include "main.h"

/**
 * puts2 - a function that prints every other element of a string
 * @str: string pointer to the value to be provided
 * Return: nothing is returned
 */

void puts2(char *str)
{
	int index = 0;

	for (; str[index] != '\0'; index++)
	{
		if ((index % 2) == 0)
		{
			_putchar(str[index]);
		}
		else
		{
			continue;
		}

	}
	_putchar('\n');
}
