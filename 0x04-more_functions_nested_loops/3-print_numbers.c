#include "main.h"

/**
*print_numbers - prints the numbers, from 0 to 9
*
*Return: no return
*/

void print_numbers(void)
{
int sum;
for (sum = 0; sum <= 9; sum++)
_putchar((sum % 10) + '0');

_putchar('\n');
}
