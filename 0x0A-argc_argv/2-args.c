#include <stdio.h>
#include "main.h"

/**
 * main - prints all the argumets passed to it
 * @argc: the arguments supplied
 * @argv: pointer to pointer of the arguments
 * Return: 0 to indicate success
 */

int main(int argc, char **argv)
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}

	return (0);
}
