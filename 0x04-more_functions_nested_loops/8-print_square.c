#include "main.h"

/**
 * print_square - prints a square + new line
 * @size: size of the square
 * Return: does not return anything (void)
 */

void print_square(int size)
{
int row;
int column;

if (size > 0)
{
for (row = 0; row < size; row++)
{
for (column = 0; column < size; column++)
{
	_putchar('#');
}
_putchar('\n');
}
}
else
{
	_putchar('\n');
}
}
