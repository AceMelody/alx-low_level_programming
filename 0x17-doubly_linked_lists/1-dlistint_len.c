#include "lists.h"

/**
 * dlistint_len - determines the length of the list
 * @h: the head of the list
 *
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
