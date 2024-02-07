#include "lists.h"

/**
 * get_nodeint_at_index - gets the element at the specified index
 * @head: the head of the list
 * @index: the indec of the node
 *
 * Return: the node at the index @index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n, v;

	n = list_len(head) - 1;
	if (index > n)
		return (NULL);
	temp = head;
	for (v = 0; v < index; v++)
		temp =  temp->next;

	return (temp);
}

/**
 * list_len - finds the length of a list
 * @h: the head of the pointer
 *
 * Return: length of the list
 */

unsigned int list_len(listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
