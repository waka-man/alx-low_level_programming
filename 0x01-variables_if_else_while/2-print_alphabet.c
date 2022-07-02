#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Lower case printer
 *Return: Nothing to return
 **/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
