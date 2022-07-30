#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concats two strings and allocates new memory for the result
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2 to be contnated with s1
 * Return: newly allocated memory for s1 fllowed by the first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result_location;
	unsigned int index, jndex, kndex, lndex;

	if (s1 == NULL)
	{
		s1 = ""; /* Treating NULL as empty string */
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] != '\0'; index++) /* getting the length of s1 */
	{
	}
	for (jndex = 0; s2[jndex] != '\0'; jndex++)
	{
	}

	if (n >= jndex)
	{
		n = jndex;
	}

	jndex = jndex + index;

	result_location = malloc(sizeof(char *) * (jndex + 1));

	if (result_location == NULL)
	{
		return (NULL);
	}

	/* Now we CONCAT */

	for (kndex = 0; s1[kndex] != '\0'; kndex++)
	{
		result_location[kndex] = s1[index];
	}
	for (lndex = 0; s2[lndex] != '\0'; lndex++)
	{
		result_location[kndex] = s2[jndex];
		kndex++;
	}
	kndex++; /* for the null terminator */
	result_location[kndex] = '\0';

	return (result_location);
}
