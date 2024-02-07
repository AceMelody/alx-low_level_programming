#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given positiion
 * @head: pointer to the head of the list
 * @idx: the index at which the node is inserted
 * @n: the data of the new node
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len;
	int p;
	lisint_t *temp, *node;

	temp = *head;
	len = listint_len(temp) - 1;
	if (idx > len)
		return (NULL);
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	idx--;
	for (p = 0; p < idx; p++)
		temp = temp->next;
	node->next = temp->next;
	temp->next = node;

	return (node);
}

/**
 * listint_len - finds the length of a list
 * @h: the head if the list
 *
 * Return: length of the list
 */

unsigned int listint_len(listint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
