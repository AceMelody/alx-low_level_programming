#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index @index of a linked list
 * @head: pointer to the head pointer
 * @index: the position of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0, k;
	listint_t *temp, *prev, *trav;

	temp = trav = *head;
	while (trav != NULL)
	{
		trav = trav->next;
		len++;
	}
	if (index >= len || index < 0)
		return (-1);
	for (k = 0; k < index; k++)
	{
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);

	return (1);
}
