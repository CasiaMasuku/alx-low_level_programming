#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow, *fast;
if (head == NULL)
exit(98);
slow = head;
fast = head->nxt;
while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)fast, fast->n);
break;
}
slow = slow->nxt;
if (fast != NULL && fast->nxt != NULL)
fast = fast->nxt->nxt;
else
fast = NULL;
}
return (count);
}
