#include "main.h"

/**
 * print_line - Draws a straight line in the terminal plus new line
 * @n: takes an integer as input
 * Return: does not return anything (void)
 */
void print_line(int n)
{
int i = 0;

if (n > 0)
{
for (; i < n; i++)
_putchar('_');
}

_putchar('\n');
}
