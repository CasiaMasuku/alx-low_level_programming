#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size is the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, x;
		for (a = 0; a < size; a++)
		{
			for (x = 0; x < size; x++)
			{
				-putchar('#');
			}
			_putchar('\n');
		}
	}
}
