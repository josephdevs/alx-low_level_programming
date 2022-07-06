#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: n is an integer
* Return: Returns 1 if positive, 0 if its a zero and -1 for negatives
*/

int print_sign(int n)
{

if (n > 0)
	{
	_putchar('+');
	return (1);
	}

else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

else
	{
	_putchar('0');
	return (0);
	}
}
