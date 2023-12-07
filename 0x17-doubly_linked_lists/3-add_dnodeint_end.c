#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: the head of the list
 * @n: the data of the new node
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tailnd, *temp;

	tailnd = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (tailnd == NULL)
		return (NULL);
	tailnd->n = n;
	if (head == NULL)
	{
		tailnd->prev = NULL;
		tailnd->next = NULL;
		head = tailnd;
	}
	else
	{
		temp = head;
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
		else
		{
			temp->next = tailnd;
			tailnd->next = NULL;
			tailnd->prev = temp;
		}
	}
	return (tailnd);
}
