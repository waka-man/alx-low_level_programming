#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all the integer arguments passed to it
 * @argc: the arguments passed
 * @argv: pointer to a pointer of the arguments
 * Return: 0 to indicate success and 1 to indicate failure
 */

int main(int argc, char **argv)
{
	int index;
	int sum = 0;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			if (!atoi(argv[index]))
				{
					printf("Error\n");
					return (1);
				}
			sum = sum + atoi(argv[index]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
