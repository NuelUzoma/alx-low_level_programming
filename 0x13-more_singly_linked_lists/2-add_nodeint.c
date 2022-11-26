#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: the head
 * @n: number of nodes
 * Return: address of the new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	  listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
	return (NULL);
}
new->n = n;
new->next = *head;
*head = new;

return (new);
}
