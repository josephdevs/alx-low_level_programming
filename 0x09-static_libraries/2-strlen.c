#include "main.h"

/**
 * _strlen - finds and returns the length of a string
 * @s: string '*s'
 * Return: value of i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
