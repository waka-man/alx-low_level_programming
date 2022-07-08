#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square to be printed
 * Return: nothing is returned
 */

void print_square(int size)
{
	int column;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= size; column++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
