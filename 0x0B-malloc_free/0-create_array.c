#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars
 *@size: elements in array
 *@c: values of elements in array
 *Return: as defined
 */

char *create_array(unsigned int size, char c)
{
	char *letters = malloc(size);

	if (size == 0 || letters == 0)
	{
		return (0);
	}

	while (size--)
	{
		letters[size] = c;
	}

return (letters);
}


