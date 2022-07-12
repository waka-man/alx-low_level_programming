#include "main.h"

/**
 * _strcpy - copies string pointed to by src to string
 * to a string pointed to by dest
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * Return: pointer value to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
