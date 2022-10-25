#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 * Muhammad:i
 * new-node: Ibrahim
 * Bello: temp
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int Muhammad = 1;
	listint_t *Ibrahim, *Bello;

	if (head == NULL)
		return (NULL);

	Ibrahim = malloc(sizeof(listint_t));
	if (Ibrahim == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = Ibrahim;
		Ibrahim->next = NULL;
		Ibrahim->n = n;
		return (Ibrahim);
	}

	if (idx == 0)
	{
		Ibrahim->next = *head;
		Ibrahim->n = n;
		*head = Ibrahim;
		return (Ibrahim);
	}

	Bello = *head;
	while (Muhammad < idx)
	{
		Bello = Bello->next;
		Muhammad++;
	}

	Ibrahim->n = n;
	Ibrahim->next = Bello->next;
	Bello->next = Ibrahim;
	return (Ibrahim);
}
