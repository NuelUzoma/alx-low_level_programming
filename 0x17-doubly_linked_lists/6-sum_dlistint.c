#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list.
 * @head: pointr to the head
 * Return: 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *head = NULL;

	add some nodes to the linked list
	head = add_dnodeint_end(head, 1);
	head = add_dnodeint_end(head, 2);
	head = add_dnodeint_end(head, 3);

	int sum = sum_dlistint(head);

	printf("Sum of all data: %d\n", sum);
}
