#include "main.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elems = 0;
	list_t *temp = h;

	while (temp != '\0')
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		elems++;
	}
	return (elems);
}
