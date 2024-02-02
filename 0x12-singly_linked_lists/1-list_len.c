#include "lists.h"

/**
 * list_len - counts the elements of a linked list
 * @h: the head of the list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t elems = 0;

	while (temp != NULL)
	{
		elems++;
		temp = temp->next;
	}
	return (elems);
}
