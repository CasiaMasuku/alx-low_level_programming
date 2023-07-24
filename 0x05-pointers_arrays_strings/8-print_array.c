#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 * @n:  number of elements of the array to be printed
 * @a: array
 *
 * Return:elements of an array of integers
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != n - 1)
printf(", ");
}
printf("\n");
}

