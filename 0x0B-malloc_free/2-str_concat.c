#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: first str to concatenate
 *@s2: second str to concatenate
 *
 *Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
s = malloc(sizeof(char) * (len1 + len2 + 1));
if (s == NULL)
return (NULL);
strcpy(s, s1);
strcat(s, s2);
return (s);
}
