#include "main.h"

/**
 * main - Execution entry
 * Return: 0 for success
 */

int main(void)
{
	char *my_char = "_putchar";

	while (*my_char)
	{
		_putchar(*my_char);
		my_char++;
	};
	_putchar('\n');

	return (0);

}
