#include "lists.h"

/**
 * sum_listint - A function that sums values from listint_t
 * @head: A pointer listint_t structure
 * Return: The sum of all the data n from list
 * Muhammad: Sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int Muhammad = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		Muhammad += head->n;
		head = head->next;
	}
	return (Muhammad);
}
