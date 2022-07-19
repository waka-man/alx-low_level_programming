#include "main.h"

/**
 * _memset - fills memory with a constant byte b
 * @s: pointer pointing to s memory area
 * @b: character to fill
 * @n: byte of memory are to be filled
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
