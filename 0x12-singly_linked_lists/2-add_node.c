#include "lists.h"

/**
 * add_node - a function that adds a new node
 * @head: pointer
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t count;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	for (count = 0; str[count]; count++)
		;


	temp->len = count;
	temp->next = *head;
	*head = temp;

	return (*head);
}
