#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list_t  list
 * @head: the head of the list
 * @str: a member of the node
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	static list_t *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		node->str = strdup(str);
	}
	else
	{
		node->next = *head;
		node->str = strdup(str);
		*head = node;
	}
	return (*head);
}
