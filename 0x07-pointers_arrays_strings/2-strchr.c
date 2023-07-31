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
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'); i++);
if (s[i] == c)
return (s + i);
else
return (NULL);
}
