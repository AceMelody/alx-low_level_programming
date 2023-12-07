#include "lists.h"

/**
 * sum_dlistint - adds all the values stored in a list
 * @head: the head of the list
 *
 * Return: the sum of the values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
