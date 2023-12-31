#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number considered
 * @index:  index, starting from 0 of the bit
 *
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
return (-1);
*n &= ~(1 << index);
return (1);
}
