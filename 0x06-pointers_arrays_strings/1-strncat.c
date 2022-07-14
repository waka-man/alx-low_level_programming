#include "main.h"

/**
 * _strncat - similar to the previous function but takes
 * additional argument for the max byte it can use from src
 * @src: the first string
 * @dest: the second string on which the first one will be concatnated
 * @n: the max bytes to use from src
 * Return: resturns pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index_dest = 0;
	int index_src = 0;

	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}

	while (index_src < n)
	{
		dest[index_dest + index_src] = src[index_src];

		if (src[index_src] == '\0')
		{
			index_src = n;
		}

		index_src++;
	}

	return (dest);
}
