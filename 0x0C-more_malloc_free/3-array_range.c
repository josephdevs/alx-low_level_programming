#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  create an array of integers
 * @min: size of the array
 * @max: char to initialize
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
	int *memPtr, i;

	if (min > max)
	{
		return (NULL);
	}

	memPtr = malloc((max - min + 1) * sizeof(int));

	if (memPtr == 0)
	{
		return (NULL);
	}

	for (i = 0; min + i <= max; i++)
	{
		memPtr[i] = min + i;
	}

return (memPtr);
}
