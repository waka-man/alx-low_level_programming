#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point to our program that calculates change based on coins
 * @argc: arguments supplied, in this case cents
 * @argv: pointer to a pointer of the arguments
 * Return: 0 for success and 1 for failure
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - helper function calculates change based on cents passed as args
 * @cents: passed from main function
 * Return: the change
 */

int change(int cents)
{
	int coins;

	while (cents > 0)
	{
		while (cents >= 25)
		{
			cents = cents - 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents = cents - 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents = cents - 5;
			coins++;
		}
		while (cents >= 2)
		{
			cents = cents - 2;
			coins++;
		}
		while (cents >= 1)
		{
			cents = cents - 1;
			coins++;
		}

	}
	return (coins);
}
