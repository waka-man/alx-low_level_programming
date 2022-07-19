#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to the string to be evaluated
 * @accept: the second string s is evaluated against
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index;
	unsigned int index_two;
	unsigned int counter = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index_two = 0; accept[index_two] != '\0'; index_two++)
		{
			if (s[index] == accept[index_two])
			{
				counter++;
				break;
			}
		}
		if (s[index] != accept[index_two])
		{
			break;
		}
	}
	return (counter);
}
