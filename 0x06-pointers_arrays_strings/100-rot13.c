#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: is the string to be considered
 *
 * Return: string
 */
char *rot13(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet_it[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
for (j = 0; j < 10; j++)
if (s[i] == letters[j])
s[i] = leet_it[j];
return (s);
}
