#include <stdio.h>

/**
 * main- Entry point
 *
 * Prints numbers 0 to 9 separated by commas and spaces
 * Return: (0)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
