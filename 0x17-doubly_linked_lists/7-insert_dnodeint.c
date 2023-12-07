#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the position at which the node is inserted
 * @n: the value to be stored in the node that will be inserted
 *
 * Return: the adress of the new node on success, NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, count = 0;
	dlistint_t *tail, *temp, *newnode;

	if (h == NULL)
		return (NULL);
	tail = temp = h;
	while (tail->next != NULL)
	{
		tail = tail->next;
		len++;
	}
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx > len)
		return (NULL);
	else if (idx == len)
		add_dnodeint_end(h, n);
	else
	{
		while (count < idx)
		{
			temp = temp->next;
			count++;
		}
		newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		temp->prev->next = newnode;
		newnode->prev = temp->prev;
		newnode->next = temp;
		temp->prev = newnode;
	}
	return (newnode);
}
