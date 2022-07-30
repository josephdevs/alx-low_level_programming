#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to be used
 * Return: memPtr
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *memPtr = s;

	while (n--)
		*s++ = b;

	return (memPtr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: length of array
 * @size: element size
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memPtr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	memPtr = malloc(nmemb * size);

	if (memPtr == 0)
		return (NULL);

	_memset(memPtr, 0, nmemb * size);

	return (memPtr);
}
