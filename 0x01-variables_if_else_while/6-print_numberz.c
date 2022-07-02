#include <stdlib.h>
#include <stdio.h>
/**
 *main - prints all single digit numbers of base 10 starting from 0
 *followed by a new line
 *Return: Always 0
 **/
int main(void)
{
	int my_int;

	for (my_int = 48; my_int <= 57; my_int++)
	{
		putchar(my_int);
	}

	putchar(10);
	return (0);
}
