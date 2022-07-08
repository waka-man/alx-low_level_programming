#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of the triangle
 * Return: nothing is returned
 */

void print_triangle(int size)
{
	int row;
	int column;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
