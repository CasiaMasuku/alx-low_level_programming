#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *current;
unsigned int i;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
current = *head;
i = 0;
while (current != NULL)
{
if (i == idx - 1)
{
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
i++;
current = current->next;
}
free(new_node);
return (NULL);
}
