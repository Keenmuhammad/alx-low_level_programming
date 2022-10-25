#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  * Muhammad: Current
  * Ibrahim: New
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *Muhammad, *Ibrahim;

	Muhammad = *head;
	Ibrahim = malloc(sizeof(listint_t));
	if (Ibrahim == NULL)
		return (NULL);
	Ibrahim->n = n;
	if (index == 0)
	{
		Ibrahim->next = Muhammad;
		*head = Ibrahim;
		return (*head);
	}
	while (index > 1)
	{
		Muhammad = Muhammad->next;
		index--;
		if (!Muhammad)
		{
			free(Ibrahim);
			return (NULL);
		}
	}
	Ibrahim->next = Muhammad->next;
	Muhammad->next = Ibrahim;
	return (Ibrahim);
}
