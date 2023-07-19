#include "main.h"
#include <stdio.h>

/**
 *print_to_98 -  prints all natural numbers from n to 98
 *
 *@n: is the integer to start with
 *Return: no return
 */
void print_to_98(int n)
{
int x;
if (n > 98)
{
for (x = n; x >= 98; x--)
{
if (x == 98)
{
printf("%d", x);
}
else
{
printf("%d, ", x);
}
}
}
else
{
for (x = n; x <= 98; x++)
if (x == 98)
{
printf("%d", x);
}
else
{
printf("%d, ", x);
}
}
_putchar('\n');
}
