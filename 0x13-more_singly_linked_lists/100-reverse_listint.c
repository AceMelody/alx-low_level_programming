#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: points to the head pointer
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev, *lastnode;

	temp = lastnode = *head;
	temp = temp->next;
	lastnode->next = NULL;
	while (temp != NULL)
	{
		prev = temp;
		temp = temp->next;
		prev->next = lastnode;
		lastnode = prev;
	}
	*head = lastnode;

	return (lastnode);
}
