#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returt: no return
 */
void swap_int(int *a, int *b)
{
int new = *a;
*a = *b;
*b = new;
}
