#include "main.h"

/**
 * rev_string - takes a string pointer and prints the string value
 * in reverse on stdout
 * @s: pointer to the string value
 * Return: nothing is returned
 */

void rev_string(char *s)
{
	int index = 0;
	int rev_index;
	char element = s[0];

	while (s[index] != '\0')
	{
		index++;
	}

	for (rev_index = 0; rev_index < index; rev_index++)
	{
		index--;

		element = s[rev_index];
		s[rev_index] = s[index];
		s[index] = element;

	}
}
