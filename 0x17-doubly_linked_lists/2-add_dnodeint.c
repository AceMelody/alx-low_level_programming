#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the given list
 * @head: the head of the list
 * @n: the data to be kept in the new node
 *
 * Return: address of the new node
 */

dlist_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnd;

	newnd = (dlistint_t *)malloc(sizeof(dlisint_t));
	if (newnd == NULL)
		return (NULL);
	newnd->n = n;
	newnd->prev = NULL;
	head->prev = newnd;
	newnd->next = head;
	head = newnd;

	return (head);
}
