#include "main.h"

/**
 * is_prime - checks if a number is a prime number
 * @n: the numbert to be checked
 * @counter: steps
 * Return: result
 */

int is_prime(int n, int counter)
{
	if (counter == 1)
		return (1);
	if (n % counter == 0)
		return (0);
	else
		return (is_prime(n, counter - 1));
}

/**
 * is_prime_number - runner function executing the is_prime function
 * @n: the number to be evaluated
 * Return: 1 if the number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (is_prime(n, n / 2) > 0)
		return (1);
	return (0);
}
