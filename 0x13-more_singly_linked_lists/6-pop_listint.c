#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: head of linked list
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *i;
	int v;

	if (head == NULL)
		return (0);

	i = *head;
	if (i == NULL)
		return (0);

	v = i->n;
	*head = i->next;
	free(i);
	return (v);
}
