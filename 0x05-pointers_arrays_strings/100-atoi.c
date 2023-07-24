#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: targeted string
 *
 * Return: converted int
 */
int _atoi(char *s)
{
int sign = 1;
int res = 0;
int a = 0;
if (s[0] == '-')
{
sign = -1;
a++;
}
else if (s[0] == '+')
{
a++;
}
while (s[a] != '\0')
{
if (s[a] >= '0' && s[a] <= '9')
{
res = res * 10 + s[a] - '0';
}
else
{
break;
}
a++;
}
return (sign *res);
}
