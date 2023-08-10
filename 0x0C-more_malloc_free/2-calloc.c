#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: int type
 * @size: int type
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i, total;
if (nmemb == 0 || size == 0)
return (NULL);
total = nmemb * size;
ptr = malloc(total);
if (ptr == NULL)
return (NULL);
for (i = 0; i < total; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
