#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be connsidered
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
int flag = 0;
while (mask)
{
if (n & mask)
{
putchar('1');
flag = 1;
}
else if (flag)
{
putchar('0');
}
mask >>= 1;
}
if (!flag)
{
putchar('0');
}
utchar('\n');
}
