#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}
