#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *tail;

	tail = head;
	while (tail->next != NULL)
		tail = tail->next;
	while (tail->next == NULL)
	{
		tail = tail->prev;
		temp = tail->next;
		tail->next = NULL;
		free(temp);
	}
	free(tail);
}
