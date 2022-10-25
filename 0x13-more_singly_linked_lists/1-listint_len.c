#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements in the list
 * @h: A pointer to listint_t structure
 * Return: number of elements.
 * nodes: Muhammad
 */
size_t listint_len(const listint_t *h)
{
	size_t Muhammad = 0;

	while (h)
	{
		h = h->next;
		Muhammad++;
	}
	return (Muhammad);
}
