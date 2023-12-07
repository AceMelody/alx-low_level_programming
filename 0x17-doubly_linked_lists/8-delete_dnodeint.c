#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index @index
 * @head: the head of the list
 * @index: the position if the node tat is deleted
 *
 * Return: 1 on success, 0 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0, count = 0;
	dlistint_t *tail, *temp;

	tail = temp = head;
	while (tail->next != NULL)
	{
		tail = tail->next;
		len++;
	}
	if (index > len - 1)
	{
		return (NULL);
	}
	else
	{
		while (count < index)
		{
			temp = temp->next;
			count++;
		}
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		free(temp);
	}

	return (1);
}
