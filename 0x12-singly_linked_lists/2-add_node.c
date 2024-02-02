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
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	node->str = strdup(str);
	node->len = _strlen(str);
	return (*head);
}

/**
 * _strlen - computes the length of a string
 * @s: the string
 *
 * Return: length of the string
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
