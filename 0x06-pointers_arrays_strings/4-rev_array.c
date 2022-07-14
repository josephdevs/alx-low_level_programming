#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: points to array.
 *@n: number of elements in the array
 *Return: nothing (void)
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	i = 0;

	while (i <= n)
	{
		j = a[i];
		a[i++] = a[n];
		a[n--] = j;
	}
}
