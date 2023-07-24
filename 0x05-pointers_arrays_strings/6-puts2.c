#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character
 * @str: targeted string
 *
 * Returns: void
 */
void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
if (a % 2 == 0)
{
putchar(str[a]);
}
a++;
}
putchar('\n');
}
