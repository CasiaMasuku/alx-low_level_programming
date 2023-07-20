#include <stdio.h>

/**
 *main -  finds and prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 *Return: 0
 */
int main(void)
{
int sum;
unsigned long a1 = 0, a2 = 1, a3;
unsigned long a1_x1, a1_x2, a2_x1, a2_x2;
unsigned long x1, x2;
for (sum = 0; sum < 92; sum++)
{
a3 = a1 + a2;
printf("%lu, ", a3);
a1 = a2;
a2 = a3;
}
a1_x1 = a1 / 10000000000;
a2_x1 = a2 / 10000000000;
a1_x2 = a1 % 10000000000;
a2_x2 = a2 % 10000000000;
for (sum = 93; sum < 99; sum++)
{
x1 = a1_x1 + a2_x1;
x2 = a1_x2 + a2_x2;
if ((a1_x2 + a2_x2) > 9999999999)
{
x1 += 1;
x2 %= 10000000000;
}
printf("%lu%lu", x1, x2);
if (sum != 98)
printf(", ");
a1_x1 = a2_x1;
a1_x2 = a2_x2;
a2_x1 = x1;
a2_x2 = x2;
}
printf("\n");
return (0);
}
