#include "lists.h"

/**
 * delete_nodint_at_index - deletes the node at index @index of a linked list
 * @head: pointer to the head pointer
 * @index: the position of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t ** head, unsigned int index)
{
	listint_t *temp, *index;
	unsigned int len;
	int p;

	temp = *head;
	len = list_len(*head) - 1;
	if (index > len)
		return (-1);
	index--;
	for (p = 0; p < index; p++;)
		temp = temp->next;
	index = temp->next;
	temp = index->next;
	free(index);

	return (1);
}

/**
 * list_len - finds the length of a listint_t list
 * @h: the head of the list
 *
 * Return: the length of the list
 */
unsigned int list_len(listint_t * h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
