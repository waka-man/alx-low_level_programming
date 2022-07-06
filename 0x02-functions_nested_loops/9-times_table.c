#include "main.h"

/**
 * times_table - prints 9's time table
 * Return: nothing is returned
 */

void times_table(void)
{
	int row;
	int column;
	int i;

	for (row = 0; row <= 9; row++)
	{

		for (column = 0; column <= 9; column++)
		{
			i = (row * column);

			if (column == 0)
			{
				_putchar('0');
			}
			else if (i < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
