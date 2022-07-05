#include "main.h"

int print_sign(int n)
{
	char *add_sig = "+";
	char *subt_sig = "-";
	char *zero = "0";

	if (n > 0)
	{
		_putchar(*add_sig);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(*zero);
		return (0);
	}
	else
	{
		_putchar(*subt_sig);
		return (-1);
	}
}
