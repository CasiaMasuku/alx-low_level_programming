#include "main.h"
#include <stdio.h>

/**
 *times_table-prints the 9 times table, starting with 0
 *
 * Returns: no return
 */
void times_table(void)
{
int multi;
int x;
int i;
for (x = 0; x <= 9; x++)
{
for (i = 0; i <= 9; i++)
{
    multi = x * i;
if(i == 9)
{
printf("%d" , multi);
}
else
{
if(multi > 9){
printf("%d" , multi);
putchar(',');
putchar(' ');
}else{
printf("%d" , multi);
putchar(',');
putchar(' '); 
putchar(' ');
}
}
}
putchar('\n');
}
}
