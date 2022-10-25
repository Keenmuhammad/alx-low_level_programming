#include "lists.h"


/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: double pointer to the linked list
 * @n: value to initialize new node with
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnode, *temp;

nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);

nnode->n = n;
nnode->next = NULL;
temp = *head;

if (*head == NULL)
{
*head = nnode;
return (*head);
}

for (; temp->next != NULL; temp = temp->next)
;
temp->next = nnode;

return (nnode);

}
