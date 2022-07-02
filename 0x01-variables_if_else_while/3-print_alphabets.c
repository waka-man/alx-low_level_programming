#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - prints the alphabet in lowercase, and then in uppercase
 *followed by a new line
 *Return: 0
 **/
int main(void)
{
	int alpha;
	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 65; alpha <= 90; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
