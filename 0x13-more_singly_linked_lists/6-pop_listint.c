#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: The head node's datafrom deleted element
 * new-node: Muhammad
 */
int pop_listint(listint_t **head)
{
	listint_t *Muhammad;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	Muhammad = (*head)->next;
	free(*head);
	*head = Muhammad;
	return (n);
}
