#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: double pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
while (*head != NULL)
{
tmp = (*head)->nxt;
free(*head);
*head = tmp;
}
head = NULL;
}
