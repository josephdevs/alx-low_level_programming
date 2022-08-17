#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds node to linked list head
 * @head: linked list head
 * @n: integer element of the linked list
 * Return: number(elements)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
