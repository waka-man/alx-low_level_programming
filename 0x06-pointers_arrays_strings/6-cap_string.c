#include "main.h"

/**
 * cap_string - capitalizes first letter of every word after a legal separator
 * which are supplied
 * @str: the string to be evaluated
 * Return: the evaluated string is returned
 */

char *cap_string(char *str)
{
	int index;
	int jndex;
	int cap_factor = 32;
	int seps[] = {' ', ',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (index = 0; str[index] != 0; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - cap_factor;
		}

		cap_factor = 0;

		for (jndex = 0; seps[jndex] != '\0'; jndex++)
		{
			if (str[index] == seps[jndex])
			{
				cap_factor = 32;
				break;
			}
		}

	}

	return (str);
}
