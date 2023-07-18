#include "main.h"

/**
 * print_alphabet_x10-prints 10 times the alphabet, in lowercase
 *
 * return: void
 */
void print_alphabet_x10(void)
{
int x = 0;
char alpha = 'a';
for(x = 0; x <= 9; x++){
for (alpha = 'a'; alpha <= 'z'; alpha++){
_putchar(alpha);
}
_putchar('\n');
}
}
