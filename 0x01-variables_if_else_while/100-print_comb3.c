#include <stdio.h>

/** Description- Prints numbers 0 to 99, separated by a comma followed by a space.
 * Return: (0)
 */
int main(void)
{
	int i = 0;
	

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
