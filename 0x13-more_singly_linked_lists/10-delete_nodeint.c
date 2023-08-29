#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * listint_t linked list
 * @head: pointer
 * @index: index of the node
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
prev = NULL;
for (i = 0; i < index && current != NULL; i++)
{
prev = current;
current = current->nxt;
}
if (current == NULL)
return (-1);
if (prev == NULL)
*head = current->nxt;
else
prev->nxt = current->nxt;
free(current);
return (1);
}
