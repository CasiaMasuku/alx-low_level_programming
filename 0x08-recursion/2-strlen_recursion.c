#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: is the string to be considered
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen_recursion(s + 1) + 1);
}
