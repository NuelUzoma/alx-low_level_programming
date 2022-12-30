#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the list
 * @index: integer
 * Return: NULL on error
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new = head;
	unsigned int i;

	for (i = 0; new != NULL && i < index; i++)
	{
		new = new->next;
	}
	return ((i == index) ? new : (NULL));
}
