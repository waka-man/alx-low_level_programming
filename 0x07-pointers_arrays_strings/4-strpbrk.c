#include "main.h"

/**
 * _strpbrk - locates the first occurence of string s from second string accept
 * @s: string to be searched in string accept
 * @accept: second string the search is taking on
 * Return: pointer to the first located byte NULL if s is not found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int index;
	unsigned int index_two;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index_two = 0; accept[index_two] != '\0'; index_two++)
		{
			if (s[index] == accept[index_two])
			{
				return (&s[index]);
			}
		}
	}
	return (NULL);
}
