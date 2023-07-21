#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int a, x;
for (a = 1; a <= size; a++)
{
for (x = 1; x < size; x++)
{
_putchar(' ');
}
for (x = 1; x <= x; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
