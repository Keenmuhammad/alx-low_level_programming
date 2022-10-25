#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Nothing
 * temp: Muhammad
 */
void free_listint(listint_t *head)
{
	listint_t *Muhammad;

	while (head)
	{
		Muhammad = head;
		head = head->next;
		free(Muhammad);
	}
	free(head);
}
