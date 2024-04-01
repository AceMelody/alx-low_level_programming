#include "lists.h"

/**
 * dlistint_len - determines the number of elements in a dlistint_t list
 * @h: points to the head of the list
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
