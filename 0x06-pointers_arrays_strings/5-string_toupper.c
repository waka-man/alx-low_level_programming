#include "main.h"

/**
 * string_toupper - converts lover cases of a string to upper case
 * @str: string provided for evaluation
 * Return: the final string result after conversion
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
