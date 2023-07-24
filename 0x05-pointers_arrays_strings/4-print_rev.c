#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: is the string to be considered
 *
 * Returns: reverse string
 */
void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
for (x--; x >= 0; x--)
{
putchar(s[x]);
}
putchar('\n');
}
