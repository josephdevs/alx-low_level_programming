#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - add node at end of linked list
 * @head: char to print
 * @n: string for node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *node;

	i = *head;

	while (i && i->next != NULL)
		i = i->next;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (i)
		i->next = node;
	else
		*head = node;
	return (node);
}
