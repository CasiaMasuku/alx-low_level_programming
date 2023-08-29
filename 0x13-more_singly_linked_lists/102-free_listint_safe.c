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
fast = (*h)->next;
slow = *h;
while (fast && fast->next)
{
if (fast == slow)
{
do {
count++;
fast = fast->next;
} while (fast != slow);
while (count > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
count--;
}
*h = NULL;
return (count);
}
fast = fast->next->next;
slow = slow->next;
}
while (*h)
{
count++;
tmp = (*h)->next;
free(*h);
*h = tmp;
}
return (count);
}
