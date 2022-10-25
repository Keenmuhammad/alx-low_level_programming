#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 * temp-Muhammad, dnode-Ibrahim, i-Bello.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Muhammad, *Ibrahim;
	unsigned int Bello = 1;

	if (*head == NULL)
		return (-1);

	Muhammad = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(Muhammad);
	}
	else
	{
		while (Bello < index)
		{
			Muhammad = Muhammad->next;
			if (Muhammad == NULL)
				return (-1);
			Bello++;
		}
		Ibrahim = Muhammad;
		Ibrahim = Ibrahim->next;
		Muhammad->next = Ibrahim->next;
		free(Ibrahim);
	}
	return (1);
}
