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
	unsigned int len = 0, p;
	listint_t *temp, *trav, *prev, *newnode;

	temp = trav = *head;
	while (trav != NULL)
	{
		trav = trav->next;
		len++;
	}
	if (idx >= len || idx < 0)
		return NULL;
	for (p = 0; p < idx; p++)
	{
		prev = temp;
		temp = temp->next;
	}
	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (newnode == NULL)
		return NULL;
	prev->next = newnode;
	newnode->n = n;
	newnode->next = temp;
}
