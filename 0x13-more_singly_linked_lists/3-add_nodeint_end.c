#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add node at end of a listint_t list.
  * @head: pointer
  * @n: int add the list
  *
  * Return: new_node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *last_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->data = n;
new_node->next = NULL;
last_node = *head;
if (last_node == NULL)
{
head = new_node;
}
else
{
while (last_node->next != NULL)
last_node = last_node->next;
last_node->next = new_node;
}
return (new_node);
}
