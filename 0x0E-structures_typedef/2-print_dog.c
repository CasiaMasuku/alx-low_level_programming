#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("name: %s\n", d->name ? d->name : "(nil)");
printf("age: %f\n", d->age);
printf("owner: %s\n", d->owner ? d->owner : "(nil)");
}
