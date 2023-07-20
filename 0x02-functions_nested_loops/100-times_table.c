#include "main.h"

/**
 *print_times_table -prints the n times table, starting with 0
 *
 *@n: parameter
 *Return: no return
 */
void print_times_table(int n);
{
int num, val, sum;
if (n <= 15 && n >= 0)
{
for (num = 0; num <= n; num++)
{
_putchar('0');

for (val = 1; val <= n; val++)
{
_putchar(',');
_putchar(' ');
sum = num * val;
if (sum <= 99)
_putchar(' ');

if (sum <= 9)
_putchar(' ');
if (sum >= 100)
{
_putchar((sum / 100) + '0');
_putchar((sum / 10) % 10 + '0');
}
else if (sum <= 99 && sum >= 10)
{
_putchar((sum / 10) + '0');
}
_putchar((sum % 10) + '0');
}
_putchar('\n');
}
}
}
