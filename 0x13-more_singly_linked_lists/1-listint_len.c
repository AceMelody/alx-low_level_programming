#include "lists.h"

/**
 * listint_len - finds the number of elements in a listint_t liat
 * @h: the head pointer of the list
 *
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while(h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
