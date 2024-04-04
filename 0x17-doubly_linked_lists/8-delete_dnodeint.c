#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given postion in a list
 * @head: points to the head pointer
 * @index: position of node to be deletee
 *
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0, count = 0;
	dlistint_t *tail, *temp;

	if (head == NULL)
		return (-1);
	tail = temp = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
		len++;
	}
	if (index > (len - 1) || len == 0)
		return (-1);
	while (count < index)
	{
		temp = temp->next;
		count++;
	}
	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;

	free(temp);
	return (1);
}
