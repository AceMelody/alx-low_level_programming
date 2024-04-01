#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: the head of the list
 * @index: index of the required node
 *
 * Return: node at nth index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (count < index)
	{
		if (temp == NULL)
			return (EXIT_FAILURE);
		temp = temp->next;
		count++;
	}

	return (temp);
}
