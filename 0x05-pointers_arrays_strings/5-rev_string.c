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
char rev = s[0];
int new = 0;
int a;
while (s[new] != '\0')
new++;
for (a = 0; a < new; a++)
{
new--;
rev = s[a];
a[a] = s[new];
s[new] = rev;
}
}
