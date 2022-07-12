#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers
 * @a: pointer to int 'a'
 * @n: integer 'n' denoting num of array elements to be printed
 * Description: Numbers must be separated by comma and space.
 * Numbers to be displayed in the same order as stored in array.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
