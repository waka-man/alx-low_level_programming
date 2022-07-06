#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers starting from input n to 98
 * @n: input integer to start from
 * Return: nothing is returned
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}

			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}

			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
