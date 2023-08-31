#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be considered
 * @index: index starting from 0 of the bit required
 *
 * Return: converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
