#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string parameter
 * Return: size
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_addChar - add char
 * @str: string param
 * @c: char param
 * Return: as defined
 */

char *str_addChar(char *str, char c)
{
	int size, i;
	char *m;

	size = _strlen(str);

	m = malloc((size + 1) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (i = 0; i <= size; i++)
		m[i] = str[i];

	m[i + 1] = c;
	m[i + 2] = '\0';

	return (m);
}


/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string parameter to validate
 * Return: as defined
 */

unsigned int nbr_spaces(char *s)
{
	int i, boov = 0;

	for (i = 0; s[i + 1] != '\0'; i++)
	{
		if (s[i]  == ' ' && s[i + 1] != ' ')
			boov++;
	}

	return (boov + 1);
}


/**
  *strtow - split a sentence into multiple words.
  *@str: the string passed as argument.
  *Return: cns
  */
char **strtow(char *str)
{
	int i;
	int spaces = nbr_spaces(str);
	char **cns = NULL;
	char *cn;
	int spcChkr = 0;
	int word = 0;

	if (!cns)
	{
		printf("Failed");
		return (0);
	}


	printf("looping");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (spcChkr == 0)
			{
				word++;
				spcChkr = 1;
			}
		}
		else
		{
			printf("1");
			cn = cns[word];
			free(cns[word]);
			str_addChar(cn, str[i]);
			spcChkr = 0;
		}

}

	cns[i] = NULL;

return (cns);
}
