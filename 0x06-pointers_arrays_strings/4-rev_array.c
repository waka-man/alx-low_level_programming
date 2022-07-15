#include "main.h"

/**
 * reverse_array - reverses the contents of a string array
 * @a: pointer to the array
 * @n: the number of members of the array
 * Return: nothing is returned
 */

void reverse_array(int *a, int n)
{
	int index;
	int temp;

	for (index = 0; index < n; index++)
	{
		n--;
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
	}
}
