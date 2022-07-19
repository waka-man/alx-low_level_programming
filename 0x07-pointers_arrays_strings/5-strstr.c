#include "main.h"

/**
 * _strstr - finds needle in the haystack ;)
 * @haystack: well, this is where we look for the needle
 * @needle: the needle
 * Return: pointer to the first byte NULL if needle not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;
		temp = haystack;

		while (*needle == *haystack)
		{
			needle++;
			haystack++;
		}

		if (*needle == '\0')
		{
			return (temp);
		}

		haystack++;
	}
	return (NULL);
}
