#include "lists.h"

/**
 * list_len - A function that gets the number of nodes of linked list
 * @h: head of linked list
 * Return: number of nodes as size_t
 * Muhammad = nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int Muhammad = 0;

	while (h)
	{
		Muhammad++;
		h = h->next;
	}
	return (Muhammad);
}
