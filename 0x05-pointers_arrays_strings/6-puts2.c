#include "main.h"
/**
 * puts2 - prints every other char of a string starting with first
 * @str: points to target string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

_putchar('\n');
}
