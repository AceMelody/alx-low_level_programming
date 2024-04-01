#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data of a dlistint_t list
 * @head: the head of the list
 *
 * Return: the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
