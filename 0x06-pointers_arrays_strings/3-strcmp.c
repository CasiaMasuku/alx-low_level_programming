#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: function of strings
 * @s2: function of strcmp
 *
 * Return: comparison
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
