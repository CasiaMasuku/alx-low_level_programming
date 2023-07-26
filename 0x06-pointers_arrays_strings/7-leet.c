#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: string
 */
char *leet(char *str)
{
char *leet_str = str;
char *leet_chars = "AaEeOoTtLl";
char *leet_nums = "44330771";
int i, j;
for (i = 0; leet_str[i]; i++)
{
for (j = 0; leet_chars[j]; j++)
{
if (leet_str[i] == leet_chars[j])
{
leet_str[i] = leet_nums[j];
break;
}
}
}
return (str);
}
