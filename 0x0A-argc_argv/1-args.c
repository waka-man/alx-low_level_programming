#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: the arguments supplied
 * @argv: pointer to a pointer of the args
 * Return: 0 to indicate success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
	}
	printf("%d\n", index - 1);

	return (0);
}
