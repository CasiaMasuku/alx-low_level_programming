#include "main.h"

/**
 *print_last_digit- prints the last digit of a number
 *
 *@x: verify this alphabet
 *Return: (0)
 */
int print_last_digit(int x)
{
int digit = x % 10;
printf("Last digit of %d is: %d", x, digit);
return digit;
}
