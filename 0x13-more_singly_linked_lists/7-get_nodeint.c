#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: index of the node
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
return (NULL);
for (i = 0; i < index && head != NULL; i++)
head = head->next;
if (i < index)
return (NULL);
return (head);
}
