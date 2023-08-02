#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: is the string to consider
 *
 * Return: 1
 */
bool is_palindrome(char *s)
{
int len = strlen(s);
for (int i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
{
return (false);
}
}
return (true);
}
