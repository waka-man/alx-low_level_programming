#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line
 *
 *Return: 0
 **/
int main(void)
{
	char my_char;
	int my_int;

	for (my_int = 48; my_int <= 57; my_int++)
	{
		putchar(my_int);
	}

	for (my_char = 'a'; my_char <= 'f'; my_char++)
	{
		putchar(my_char);
	}

	putchar('\n');
	return (0);
}
