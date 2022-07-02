#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the lowercase alphabet in reverse, followed by a new line
 *
 *Return: 0 if success
 **/
int main(void)
{
	char my_char;

	for (my_char = 'z'; my_char >= 'a'; my_char--)
	{
		putchar(my_char);
	}

	putchar('\n');
	return (0);
}
