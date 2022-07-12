#include "main.h"

/**
 * puts_half -  prints the second half of a string value
 * provided a pointer to the string value as a param
 * @str: the pointer to the string value
 * Return: nothing is returned
 */

void puts_half(char *str)
{
	int index = 0;
	int element_count = 0;
	int half_index;

	while (str[index] != '\0')
	{
		element_count++;
		index++;

	}

	if ((element_count % 2) == 0)
	{
		half_index = (index + 1) / 2;

		for (; half_index <= index; half_index++)
		{
			_putchar(str[half_index]);
		}
	}
	else
	{
		half_index = (index / 2) + 1;

		for (; half_index <= index; half_index++)
		{
			_putchar(str[half_index]);
		}
	}
	_putchar('\n');
}
