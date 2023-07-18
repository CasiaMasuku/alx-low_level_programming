#include "main.h"

/**
 * Description-Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: (0)
 */
void print_alphabet(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
_putchar(alpha);

_putchar('\n');
}
