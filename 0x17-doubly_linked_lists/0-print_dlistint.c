#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h: points to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
