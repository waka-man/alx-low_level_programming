#include "main.h"

/**
 * _strlen - returns the length of a string by taking the pointer
 * to the string as a param
 * @s - pointer to the string variable
 * Return: the length of the string as int
 */

int _strlen(char *s)
{
	int len = 0;
	int index = 1;
	char element = s[0];

	while (element != '\0')
	{
		len++;
		element = s[index++];
	}

	return (len);
}
