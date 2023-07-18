#include "main.h"

/**
 *print_last_digit- prints the last digit of a number
 *
 *@x: verify this alphabet
 *Return: (0)
 */
int print_last_digit(int x)
{
int z;

if (x < 0)
{
z = -1 * (x % 10);
_putchar(z + '0');
return (z);
}
else
{
z = x % 10;
_putchar(z + '0');
return (z);
}
}
