#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search
 * @needle: substring
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
char *t;
t = strstr(haystack, needle);
return (t);
}
