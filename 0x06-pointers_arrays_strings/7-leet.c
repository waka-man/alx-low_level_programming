#include "main.h"

/**
 * leet - replaces certain chars in a string with given chars
 * @s: string to be evaluated
 * Return: the evaluated string will be returned
 */

char *leet(char *s)
{
	int index = 0;
	int jndex;

	int replaced_upp[] = {'A', 'E', 'O', 'T', 'L'};
	int replaced_low[] = {'a', 'e', 'o', 't', 'l'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	while (s[index] != 0)
	{
		for (jndex = 0; jndex < 5; jndex++)
		{
			if ((s[index] == replaced_upp[jndex]) ||
			    (s[index] == replaced_low[jndex]))
			{
				s[index] = replacer[jndex];
			}
		}

		index++;
	}
	return (s);
}
