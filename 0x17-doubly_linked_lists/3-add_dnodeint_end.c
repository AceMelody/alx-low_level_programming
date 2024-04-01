#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end od a dlistint_t list
 * @head: points to the head pointer
 * @n: integer
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *temp;

	tail = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (tail == NULL)
		return (EXIT_FAILURE);
	tail->n = n;
	if (*head == NULL)
	{
		tail->prev = NULL;
		tail->next = NULL;
		*head = tail;
	}
	else
	{
		temp = *head;
		if (temp->next != NULL)
			temp = temp->next;
		temp->next = tail;
		tail->next = NULL;
		tail->prev = temp;
	}

	return (tail);
}
