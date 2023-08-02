#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: character to consider
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return (0);
}
_putchar(*s);
_puts_recursion(s + 1);
}