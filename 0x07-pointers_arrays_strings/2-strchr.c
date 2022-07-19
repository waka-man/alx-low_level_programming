#include "main.h"

/**
 * _strchr - find a character within a string
 * @s: pointer to the string to be evaluated
 * @c: character to be found
 * @Return: pointer to the first ocuurence of c, NULL if not found
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
