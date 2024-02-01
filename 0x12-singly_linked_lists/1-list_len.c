#include "main.h"

/**
 * list_len - counts the elements of a linked list
 * @h: the head of the list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	list_t *temp = h;
	size_t elems = 0;

	while (temp != '\0')
	{
		elems++;
		temp = temp->next;
	}
	return (elems);
}
