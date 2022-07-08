#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal based on n input
 * @n: number of times the diagonal line is printed on the terminal
 * Return: nothing is returned
 */

void print_diagonal(int n)
{
	int column;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= n; column++)
		{
			for (space = 1; space < column; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}


	}
}
