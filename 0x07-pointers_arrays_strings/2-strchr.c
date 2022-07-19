#include "main.h"

/**
 * _strchr - find a character within a string
 * @s: pointer to the string to be evaluated
 * @c: character to be found
 * @Return: pointer to the first ocuurence of c, NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
		s++;
	}
	return (NULL);
}
