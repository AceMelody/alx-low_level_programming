#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head pointer
 * @n: tge element of the new node
 *
 * Reurn: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	node->n = n;

	return (*head);
}
