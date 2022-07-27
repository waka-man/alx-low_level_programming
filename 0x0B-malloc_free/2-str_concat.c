#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats two strings passed as params and returns
 * pointer to the memory location of the new string
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int index_one = 0;
	int index_two = 0;
	int new_index = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[index_one] != '\0')
	{
		index_one++;
	}
	while (s2[index_two] != '\0')
	{
		index_two++;
	}
	new_index = index_one + index_two + 1;
	new_string = (char *) malloc(sizeof(char) * new_index);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (; s1[index_one] != '\0'; index_one++)
	{
		new_string[index_one] = s1[index_one];
	}
	for (; s2[index_two] != '\0'; index_two++)
	{
		new_string[index_one] = s2[index_two];
		index_one++;
	}
	return (new_string);
}
