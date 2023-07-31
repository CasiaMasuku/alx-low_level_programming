#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array
 *
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
int x, j;
for (x = 0; x < 8; x++)
{
for (j = 0; j < 8; j++)
_putchar("%c", a[x][j]);
_putchar("\n");
}
}
