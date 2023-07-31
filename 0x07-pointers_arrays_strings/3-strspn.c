#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: bytes from accept
 * @accept: pointer
 *
 * Return: number if bytes(n)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n;
n = strspn(s, accept);
return (n);
}
