#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: the head
 * @n: number of nodes
 * Return: address of the new element or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	  size_t count;
	  listint_t *temp;

	  temp = malloc(sizeof(listint_t));
	  if (temp == NULL)
	  {
		  return (NULL);
	  }
	  for (count = 0; n[count]; count++)
		  ;
          temp->n = count;
	  temp->next = *head;
	  *head = temp;
	  return (*head);
}
