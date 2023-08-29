#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list that can have a loop
 * @h: pointer
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp, *fast, *slow;
size_t count = 0;
if (h == NULL || *h == NULL)
return (0);
fast = (*h)->nxt;
slow = *h;
while (fast && fast->nxt)
{
if (fast == slow) /* loop detected */
{
do {
count++;
fast = fast->nxt;
} while (fast != slow);
while (count > 0)
{
tmp = (*h)->nxt;
free(*h);
*h = tmp;
count--;
}
*h = NULL;
return (count);
}
fast = fast->nxt->nxt;
slow = slow->nxt;
}
while (*h)
{
count++;
tmp = (*h)->nxt;
free(*h);
*h = tmp;
}
return (count);
}
