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
fast = head->next;
while (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)fast, fast->n);
break;
}
slow = slow->next;
if (fast != NULL && fast->next != NULL)
fast = fast->next->next;
else
fast = NULL;
}
return (count);
}
