#include "main.h"

/**
 *string_toupper - converts string to uppercase.
 *@x: points to string
 *Return: converted string
 */

char *string_toupper(char *x)
{
	int i;

	i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
		}

		i++;
	}
	return (x);
}
