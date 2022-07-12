#include "main.h"

/**
 * swap_int - takes the pointers to two variables as params and
 * and swap the values outside of the body of code the vars are declared in
 * @*a: pointer to first integer address
 * @*b: pointer to second integer address
 * Return: Nothing is returned
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
