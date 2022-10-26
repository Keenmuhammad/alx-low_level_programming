#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that adds a new nod at the begining of a list
 * @head: A pointer to list_t structure
 * @n: An integer data to put into the new node
 * Return: the address of the new element, or NULL on failure
 * Muhammad = New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Muhammad;

	Muhammad = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = Muhammad;
	return (*head);
}
