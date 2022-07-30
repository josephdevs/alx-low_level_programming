#include "main.h"
#include <stdlib.h>

/**
 *void *malloc_checked - allocates memory using malloc
 *
 *@b: num of bytes
 *
 * Return: pointer to allocated memory
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
