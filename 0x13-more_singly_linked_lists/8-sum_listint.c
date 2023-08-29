#include "main.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->nxt;
}
return (sum);
}
