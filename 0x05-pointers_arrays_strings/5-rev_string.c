#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: is the targeted string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
char new;
size_t len = _strlen(s) - 1;
size_t a;
size_t x = len;
for (a = 0; a < len; a++)
{
new = s[x];
s[x] = s[a];
s[a] = new;
x--;
if (x == (len / 2))
{
break;
}
}
}
