#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n:  is the number of times the character \ should be printed
 *
 * return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int a, x;
		for (a = 0; a < n; a++)
		{
			for (x = 0; x < n; x++)
				if  (x == a)
				_putchar('\\');
				else if (a < x)
					_putchar(' ');
		}
		_putchar('\n');
	}
}
