#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp, *prev;

	while (head != NULL)
	{
		temp = head;
		while (temp->next->next != NULL)
			temp = temp->next;
		prev = temp;
		prev->next = NULL;
		temp = temp->next;
		free(temp);
	}
}
