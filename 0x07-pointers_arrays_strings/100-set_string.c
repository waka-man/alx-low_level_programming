#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to the pointer of the string
 * @to: the value to set
 * Return: nothing is returned
 */

void set_string(char **s, char *to)
{
	*s = to;
}
