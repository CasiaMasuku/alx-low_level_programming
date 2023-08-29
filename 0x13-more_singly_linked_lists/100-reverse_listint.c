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
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
