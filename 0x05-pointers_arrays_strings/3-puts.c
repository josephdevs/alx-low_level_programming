#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str: points to target string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

_putchar("\n");
}
