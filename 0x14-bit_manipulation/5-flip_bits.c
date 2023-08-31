#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int num = 0;
while (diff != 0)
{
diff = diff & (diff - 1);
num++;
}
return (num);
}
