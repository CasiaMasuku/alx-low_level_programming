#include "main.h"

/**
 *jack_bauer-prints time, starting from 00:00 to 23:59
 *
 *Description: prints a list of time
 *return: 0
 */
jack_bauer();
void jack_bauer(void)
{
int m, h;
for (h = 0; h <= 23; h++)
{
for (m = 0; m <= 59; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar(10);
}
}
}
