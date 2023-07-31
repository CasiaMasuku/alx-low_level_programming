#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: is the memory to fill
 * @b: is the value to set
 * @n: byte of the memory
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
