#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print the alphabet in lowercase except q&e
 *followed by a new line
 *Return: Always 0
 **/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}

	putchar('\n');
	return (0);
}
