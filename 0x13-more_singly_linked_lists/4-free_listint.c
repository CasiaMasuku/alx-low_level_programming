#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
listint_t *tmp;
while (head != NULL
{
tmp = head;
head = head->next;
free(tmp->n);
free(tmp);
}
}
