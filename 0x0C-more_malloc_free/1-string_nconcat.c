#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int len1, len2, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
n = len2;
s = malloc(sizeof(char) * (len1 + n + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
s[i] = s1[i];
for (j = 0; j < n; j++)
s[i + j] = s2[j];
s[i + j] = '\0';
return (s);
}
