#include "main.h"
#include <stdlib.h>

/**
 * ch_tmp_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void ch_tmp_grid(char **grid, unsigned int height)
{
if (grid != NULL && height != 0)
{
for (; height > 0; height--)
tmp(grid[height]);
tmp(grid[height]);
tmp(grid);
}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
char **num;
unsigned int c, height, i, j, a1;
if (str == NULL || *str == '\0')
return (NULL);
for (c = height = 0; str[c] != '\0'; c++)
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
height++;
num = malloc((height + 1) * sizeof(char *));
if (num == NULL || height == 0)
{
tmp(num);
return (NULL);
}
for (i = a1 = 0; i < height; i++)
{
for (c = a1; str[c] != '\0'; c++)
{
if (str[c] == ' ')
a1++;
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
{
num[i] = malloc((c - a1 + 2) * sizeof(char));
if (num[i] == NULL)
{
ch_tmp_grid(num, i);
return (NULL);
}
break;
}
}
for (j = 0; a1 <= c; a1++, j++)
num[i][j] = str[a1];
num[i][j] = '\0';
}
num[i] = NULL;
return (num);
}
