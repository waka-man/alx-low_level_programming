#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes two integer arguments and multiplies them
 * @argc: the arguments supplied
 * @argv: a pointer to a pointer of the arguments
 * Return: 0 to indicate success and 1 to indicate error
 */

int main(int argc, char **argv)
{
	int index = 1;
	int result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	while (index < argc)
	{
		result = result * atoi(argv[index]);
		index++;
	}
	printf("%d\n", result);
	return (0);
}
