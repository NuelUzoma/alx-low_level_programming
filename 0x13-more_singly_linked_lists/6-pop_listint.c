#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: linked list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (NULL);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (data);
}
