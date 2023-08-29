#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head
 *
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (head == NULL)
return (NULL);
slow = head;
fast = head;
while (slow && fast && fast->nxt)
{
slow = slow->nxt;
fast = fast->nxt->nxt;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->nxt;
fast = fast->nxt;
}
return (slow);
}
}
return (NULL);
}
