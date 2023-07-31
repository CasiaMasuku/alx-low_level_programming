#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: represents a string
 * @c: represents a character
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
return (s);
}
return (0);
}
