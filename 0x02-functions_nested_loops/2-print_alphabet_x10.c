#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase case ten times
 * Return: nothing is returned
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	int i;

	while (counter < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		counter++;
		_putchar('\n');
	}
}
