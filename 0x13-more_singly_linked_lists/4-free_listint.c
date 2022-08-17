#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 * Return: nothing (void)
 */

void free_listint(listint_t *head)
{
	listint_t *i;
	listint_t *next;

	i = head;

	while (i != NULL)
	{
		next = i->next;
		free(i);
		i = next;
	}
}
