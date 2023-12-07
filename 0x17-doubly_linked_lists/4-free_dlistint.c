#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint *head)
{
	dlistint_t *temp, *tail;

	tail = head;
	/* To get to the last node */
	while (tail->next != NULL)
		tail = tail->next;
	/* tail now points to the last node */
	/* delete last node */
	if (tail->next == NULL)
	{
		tail = tail->prev;
		temp = tail->next;
		tail->next = NULL;
		free(temp);
	}
	else
	{
		free(tail);
	}
}
