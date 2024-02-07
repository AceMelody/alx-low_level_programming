#include "lists.h"

/**
 * pop_listint - deletes tge head node of a listint_t list
 * @head: pointee to the head pointer
 *
 * Return: the element of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int f;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	f = temp->n;
	free(temp);

	return (f);
}
