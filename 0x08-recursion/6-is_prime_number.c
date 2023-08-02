#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: is the considered integer
 *
 * Return: 1
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if number is prime
 * @n: integer to consider
 * @i: iterator
 *
 * Return: 1 if n is prime
 */
int actual_prine( int n, int i)
{if (i == 1)
return (1)
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i -1))
