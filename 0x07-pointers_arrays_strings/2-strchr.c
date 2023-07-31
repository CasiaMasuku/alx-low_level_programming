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
int x = 0;
for (; s[x] >= '\0'; x++)
{
if (s[x] == c)
return (&s[x]);
}
return (0)
