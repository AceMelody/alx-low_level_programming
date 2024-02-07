#include "lists.h"

 /**
  * add_nodeint_end -  adds a new node at the end of a list_t list
  * @head: pointer to the head pointer
  * @n: tge element of the new node
  *
  * Return: the address of the new elemen
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	lisint_t *temp, *node;

	node = (lisint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}

	return (node);
}
