#include "main.h"
/**
 *_puts_recursion -   prints a string
 *@s: pointer block of memory to fill
 *Return: function has no return value (void)
 */

void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	puts_recursion(s + 1);

}
