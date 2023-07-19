#include "main.h"

/**
 *times_table-prints the 9 times table, starting with 0
 *
 * Returns: no return
 */
void times_table(void)
{
int x;
for (x = 0; x <= 10; x++)
{
printf("9 * %d = %d\n", x, 9 * x);
}
}
