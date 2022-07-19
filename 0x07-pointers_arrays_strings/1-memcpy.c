#include "main.h"

/**
 * _memcpy - copied n bytes of memory area pointed to by *src
 * to are pointed to by *dest
 * @src: pointer to src char memory area to be copied
 * @dest: pointer to dest char memory area to be copied to
 * @n: byte of data to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
