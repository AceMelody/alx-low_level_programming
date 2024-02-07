#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head of the pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if (head->next == NULL)
		free(head);
	else
	{
		while (head->next != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		free(head);
	}
}
