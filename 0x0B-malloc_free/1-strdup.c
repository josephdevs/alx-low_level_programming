#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns pointer to newly allocated space in mem
 *@str: string given as parameter
 *Return: as defined
 */

char *_strdup(char *str)
{
	int i, size;
	char *letter;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	size = 0;

	for (; str[size] != '\0'; size++)

	letter = malloc(size * sizeof(*str) + 1);

	if (letter == 0)
	{
		return (NULL);
	}

	else
	{
		for (; i < size; i++)
		{
			letter[i] = str[i];
		}
	}

	return (letter);
}
