#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to the head pointer
 * @n: integer
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnd;

	newnd = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (newnd == NULL)
		return (NULL);
	newnd->n = n;
	newnd->prev = NULL;
	if (*head != NULL)
	{
		newnd->next = *head;
		(*head)->prev = newnd;
	}
	else
		newnd->next = NULL;
	*head = newnd;

	return (newnd);
}
