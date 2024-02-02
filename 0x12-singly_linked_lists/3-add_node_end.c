#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: points to the head of the list
 * @str: a member of the new node
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
		temp = temp->next;
		node->next = NULL;
	}
	node->str = strdup(str);
	node->len = _strlen(str);

	return (temp);
}

/**
 * _strlen - computes the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

unsigned int _strlen(const char *s)
{
	unsigned int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
