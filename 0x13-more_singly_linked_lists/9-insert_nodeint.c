#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at position.
 * @head: head of linked list
 * @idx: index to insert node
 * @n: new node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	i = *head;

	while (idx != 1)
	{
		i = i->next;
		--idx;
		if (i == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = i->next;
	i->next = new;

	return (new);
}

