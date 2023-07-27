#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: is the string to be considered
 *
 * Return: string
 */
char *rot13(char *str)
{
int i, j;
char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; str[i] != '\0'; ++i)
{
for (j = 0; j < 52; ++j)
{
if (str[i] == arr1[j])
{
str[i] = arr2[j];
break;
}
}
}
return (str);
}
