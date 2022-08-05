#include "function_pointers.h"

/**
 * array_iterator - Executes function given as parameter on each lmnt of array.
 * @array: array.
 * @size: size of array.
 * @action: pointer to function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
