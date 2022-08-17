#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return num(elementCounts) in linked list
 * @h: linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elementCount = 0;
	const listint_t *i = h;

	while (i != NULL)
	{
		i = i->next;
		elementCount++;
	}
	return (elementCount);
}
