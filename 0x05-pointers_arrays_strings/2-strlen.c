#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: is the string focused on
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
