#include "main.h"

/**
 * free_list - frees a list_t list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp, *prev;

	while (head != '\0')
	{
		temp = head;
		while (temp->next->next != '\0')
			temp = temp->next;
		prev = temp;
		prev->next = '\0';
		temp = temp->next;
		free(temp);
	}
}
