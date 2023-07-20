#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 *Return: 0
 */
int main(void)
{
int sum;
unsigned long x1 = 0, x2 = 1, x3;
for (sum = 0; sum < 50; sum++)
{
x3 = x1 + x2;
printf("%lu", x3);
x1 = x2;
x2 = x3;
if (sum == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
