#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * Description: point head to null
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
}
