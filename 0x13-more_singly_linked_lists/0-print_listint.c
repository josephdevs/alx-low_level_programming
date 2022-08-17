#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print linked list elements
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;
	const listint_t *i = h;

	while (i != NULL)
	{
		printf("%i \n", i->n);
		i = i->next;
		nodeCount++;
	}
	return (nodeCount);
}
