#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer of the first node
 *
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;
if (head == NULL || *head == NULL)
return (NULL);
while (*head != NULL)
{
nxt = (*head)->nxt;
(*head)->nxt = prev;
prev = *head;
*head = nxt;
}
*head = prev;
return (*head);
}
