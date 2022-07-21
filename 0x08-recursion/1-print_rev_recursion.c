#include "main.h"
/**
 *_print_rev_recursion -   prints a string in reverse
 *@s: pointer block of memory to fill
 *Return: function has no return value (void)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
