#include "main.h"

/**
 * _strcat - concats two strings supplied as parameters
 * @src: the first string supplied to the function
 * @dest: the second string provided on which the string from src will
 * be appended to
 * Return: A pointer to the resulting concatnated string
 */

char *_strcat(char *dest, char *src)
{
	int index_dest = 0;
	int index_src = 0;

	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}

	while ((dest[index_dest + index_src] = *src++) != '\0')
	{
		index_src++;
	}

	return (dest);
}
