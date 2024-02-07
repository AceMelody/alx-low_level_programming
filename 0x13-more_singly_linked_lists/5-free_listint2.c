#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to null
 * @head: pointer to the head pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	temp = *head;
	while (temp->next != NULL)
	{
		node = temp;
		temp = temp->next;
		free(node);
	}
	node = temp;
	temp = temp->next;
	free(node);
}
