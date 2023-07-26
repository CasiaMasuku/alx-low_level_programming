#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array of integers
 * @n: elements to swap
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
int i = 0;
int x = n - 1;
while (i < x)
{
int temp = a[i];
a[i] = a[x];
a[x] = temp;
i++;
x--;
}
}
