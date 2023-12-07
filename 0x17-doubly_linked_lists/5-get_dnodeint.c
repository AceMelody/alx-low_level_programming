#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node of index @index
 * @head: head of the node
 * @index: index of the node; node indexing starts at 0
 *
 * Return: the node at index @index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *tail;
	unsigned int count = 0, len = 0;

	if (head == NULL)
		return (NULL);
	temp = tail = head;
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
		if (count < index)
		{
			temp = temp->next;
			count++;
		}
		else
		{
			return (temp);
		}
}
