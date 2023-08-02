#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: is the considered integer
 *
 * Return: 1
 */
int is_prime_number(int n)
{
if ((!(n % 2) && n != 2) || n < 2)
{
return (0);
}
else
{
return (divisors(3, n));
}
}
