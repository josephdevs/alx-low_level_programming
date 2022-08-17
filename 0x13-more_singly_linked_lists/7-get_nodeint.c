#include "lists.h"

/**
 * get_nodeint_at_index - return (n)th node of linked list.
 * @head: head of linked list
 * @index: index to return
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *i;

	if (head == NULL)
		return (0);

	i = head;

	while (index != 0)
	{
		i = i->next;
		index--;
		if (i == NULL)
			return (0);
	}

	return (i);
}
