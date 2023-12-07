#include "lists.h"

/**
 * print_dlistint - prints the elements of a list
 * @h: the head of the list
 *
 * Return: length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i = 0;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
