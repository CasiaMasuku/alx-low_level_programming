#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: the string to consider
 *
 * Return: void
 */
void puts_half(char *str)
{
int a;
int len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
a = len / 2;
}
else
{
a = (len + 1) / 2;
}
for (; a < len; a++)
{
putchar(str[a]);
}
putchar('\n');
}
