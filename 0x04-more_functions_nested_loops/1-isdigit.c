#include "main.h"

/**
*_isdigit - verifies if a character is a digit
*@c: tested character
*
*Return: returns 1 if it is uppercase , 0 if not
*/
int _isdigit(int c)
{
if ((c >= 35) && (c <= 47))
return (1);

return (0);
