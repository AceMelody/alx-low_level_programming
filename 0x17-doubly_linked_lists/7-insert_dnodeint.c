#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a list
 * @h: points to the head pointer
 * @idx: index at which the node is added, starts from 0
 * @n: integer
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, len = 0;
	dlistint_t *tail, *temp, *newnode;

	tail = temp = *h;
	while (tail->next != NULL)
	{
		tail = tail->next;
		len++;
	}
	if (idx == 0)
		newnode = add_dnodeint(temp, n);
	else if (idx == (len - 1))
		newnode = add_dnodeint_end(temp, n);
	else
	{
		newnode = (dlistint_t *) malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		while (count < idx)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
			count++;
		}
		temp->prev->next = newnode;
		newnode->prev = temp->prev;
		temp->prev = newnode;
		newnode->next = temp;
		temp->prev = newnode;
	}

	return (newnode);
}
