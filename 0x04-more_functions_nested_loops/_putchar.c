#include "main.h"
#include <unistd.h>

/**
*_putchar - writes the character c stdout
*@c: is the character to print
*
*Return: on success 1.
*on error, -1is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return(write(1,&c,1));
}
