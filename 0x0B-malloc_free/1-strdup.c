#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Copies the whole string passed to it as a param to
 * a newly allocated memory space
 * @str: the string provided to the function to be copied
 * Return: a pointer to the copy string
 */

char *_strdup(char *str)
{
	int index, last_index = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[last_index] != '\0'; last_index++)
	{

	}

	last_index += 1;

	new_str = (char *) malloc(sizeof(char) * (last_index));

	for (; index < last_index; index++)
	{
		new_str[index] = str[index];
	}
	if (new_str == NULL)
	{
		return (NULL);
	}

	new_str[last_index + 1] = '\0';

	return (new_str);
}
