#include "main.h"

/**
 * _puts - takes pointer of a string as a param and prints the string value
 * on the console
 * @str: pointer to the string
 * Return: nothing is returned
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		putchar(str[index]);
		index++;
	}
	putchar('\n');
}
