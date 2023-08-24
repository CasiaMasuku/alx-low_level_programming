#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer
 * @str: string to be considered
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
int len = 0;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
while (str[len])
len++;
new->len = len;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
last = *head;
while (last->next)
last = last->next;
last->next = new;
return (new);
}
