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
int n;
for (x = 0; x <= 10; x++)
{
for (n = 0; n <= 10; n++)
{
printf(x * n + " ");
}
printf('\n');
}
}
