#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 * @str: points to target string
 * Description: If 'n' of chars odd, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
