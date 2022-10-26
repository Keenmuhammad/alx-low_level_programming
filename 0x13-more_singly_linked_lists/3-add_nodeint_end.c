#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *Muhammad;
	listint_t *Ibrahim;

	(void)Ibrahim;

	Muhammad = malloc(sizeof(listint_t));

	if (Muhammad == NULL)
		return (NULL);

	Muhammad->n = n;
	Muhammad->next = NULL;
	Ibrahim = *head;
	if (*head == NULL)
	{
		*head = Muhammad;
	}
	else
	{
		while (Muhammad->next != NULL)
		{
			Ibrahim = Ibrahim->next;
		}
		Muhammad->next = Ibrahim;
	}

	return (*head);
}
