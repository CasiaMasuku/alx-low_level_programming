#include "main.h"
#include <stdio.h>

/**
 *times_table-prints the 9 times table, starting with 0
 *
 * Returns: no return
 */
void times_table(void)
{
int x;
int i;
for (x = 0; x <= 10; x++)
{
for (i = 0; i <= 10; i++)
{
printf((x * i) + " ");
}
printf("\n");
}
}
