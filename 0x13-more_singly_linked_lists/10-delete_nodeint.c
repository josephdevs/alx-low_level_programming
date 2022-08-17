#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at position.
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	i = *head;

	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(i);
		return (1);
	}

	while (index != 1)
	{
		if (i->next == NULL)
			return (-1);

		i = i->next;
		--index;
	}

	tmp = i->next;

	if (i->next->next)
		i->next = i->next->next;
	else
		i->next = NULL;
	free(tmp);

	return (1);

}
