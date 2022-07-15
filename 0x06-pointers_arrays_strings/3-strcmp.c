#include "main.h"

/**
 * _strcmp - works exactly like strcpm, compares the strings
 * pointed to by the parameters passed
 * @s1: first string for comparison
 * @s2: second string for comparison
 * Return: if value > 0 then s1 > s2
 * if value < 0 then s2 > s1
 * if value = 0 then s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	for (; (s1[index] != '\0' && s2[index] != '\0'); index++)
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}

	}

	return (0);
}
