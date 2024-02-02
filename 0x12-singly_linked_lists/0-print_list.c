#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elems = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[%d] %s\n", 0,"(nil)");
		temp = temp->next;
		elems++;
	}
	return (elems);
}
