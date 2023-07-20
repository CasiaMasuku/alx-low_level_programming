#include <stdio.h>

/**
 *main - finds and prints the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
unsigned long x1 = 0, x2 = 1, x3 = 0, sum = 0;
while (x3 <= 4000000)
{
x3 = x1 + x2;
x1 = x2;
x2 = x3;
if ((x1 % 2) == 0)
sum += x1;
}
printf("%ld\n", sum);
return (0);
}
