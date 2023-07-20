#include "main.h"

/**
*_isupper - verifies if a character is uppercase
*@c: tested character
*Return: returns 1 if uppercase , 0 else
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
