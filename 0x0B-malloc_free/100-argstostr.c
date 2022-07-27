#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_strlen - find length of a string
 *@s: string paarmeter
 *Return: size
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - description
 * @ac: an integer
 * @av: passed arguments
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, boov = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, boov++)
			s[boov] = av[i][j];

		s[boov] = '\n';
		boov++;
	}
	s[boov] = '\0';

	return (s);
}
