#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - I am tired
 * Return: me to bed
 */

int main(void)
{
    int i;

    for (i = 48; i < 58; i++)
    {
        putchar(i);
        if (i < 57)
        {
            putchar(44);
            putchar(32);
        }
    }
    putchar('\n');
    return (0);
}
