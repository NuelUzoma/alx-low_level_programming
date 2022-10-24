#include "lists.h"

/**
 * add-node - a function that adds a new node
 * @head: pointer
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}
