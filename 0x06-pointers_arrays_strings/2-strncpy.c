#include "main.h"

/**
 * _strncpy - works exactly like strncpy
 * @dest: pointer to the destination array we copy to
 * @src: String to be copied to dest
 * @n: number of chars to copy from src
 * Return: the final result, dest is returned
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index_src = 0;

	for (; src[index_src] != '\0'; index_src++)
	{
		if (index_src < n)
		{
			dest[index_src] = src[index_src];

		}
	}

	while (index_src < n)
	{
		dest[index_src] = '\0';
		index_src++;
	}

	return (dest);
}
