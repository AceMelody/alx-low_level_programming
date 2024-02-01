#include "main.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: points to the head of the list
 * @str: a member of the new node
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t ** head, const char *str)
{
	static list_t *node;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == '\0')
		return ('\0');
	if (head == '\0')
		head = node;
	else
	{
		while (head->next != '\0')
			head = head->next;
		head->next = node;
		node->next = '\0';
	}
	node->str = strdup(str);

	return (&node);
}
