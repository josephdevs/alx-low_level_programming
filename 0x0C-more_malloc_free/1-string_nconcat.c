#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string input
 * Return: size
 */

unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	for (; s[size] != '\0'; size++)
	;

return (size);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2 to be used
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < _strlen(s2))
		ptr = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		ptr = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (ptr == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		ptr[i] = s2[j];

	ptr[i] = '\0';

return (ptr);
}
