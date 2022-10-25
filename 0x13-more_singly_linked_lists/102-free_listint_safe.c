#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *Muhammad;

	Muhammad = *h;
	while (Muhammad)
	{
		Muhammad = *h;
		Muhammad = Muhammad->next;
		free_list(Muhammad);
		counter++;
	}
	*h = NULL;

	return (counter);
}

/**
 * free_list - A function that frees a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Nothing
 */
void free_list(listint_t *head)
{
	listint_t *Muhammad;

	if (head)
	{
		Muhammad = head;
		Muhammad = Muhammad->next;
		free(Muhammad);
		free_list(Muhammad);
	}
	free(head);
}
