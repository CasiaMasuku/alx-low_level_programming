#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: is the string to be considered
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
int a = 0;
int len = strlen(str);
int capitalize_next = 1;
while (a < len)
{
if (isspace(str[a]) || ispunct(str[a]))
{
capitalize_next = 1;
{
else if (capitalize_next)
{
str[a] = toupper(str[a]);
capitalize_next = 0;
}
a++;
}
return (str);
}
}
}
