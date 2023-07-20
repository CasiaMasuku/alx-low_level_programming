#include "main.h"

/**
*_isdigit - verifies if a character is a digit
*@c: tested character
*
*Return: returns 1 if uppercase , 0 else
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

return (0);
