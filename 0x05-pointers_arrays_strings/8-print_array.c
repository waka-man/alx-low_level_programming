#include "main.h"

/**
 * print_array - prints a given number of array elements based on passed param n
 * which is the number of elements to be printed, as well as pointer to the arra
 * @a: pointer to the array
 * @n: number of elements we want to print
 * Return: nothing is returned
 */

void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
