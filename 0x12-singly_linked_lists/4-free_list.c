#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: the linked list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
