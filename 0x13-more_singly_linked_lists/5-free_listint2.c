#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing
 * temp: Muhammad
 */
void free_listint2(listint_t **head)
{
	listint_t *Muhammad;

	if (head == NULL)
		return;

	Muhammad = *head;
	while (*head)
	{
		Muhammad = *head;
		(*head) = (*head)->next;
		free(Muhammad);
	}
	*head = NULL;
}
