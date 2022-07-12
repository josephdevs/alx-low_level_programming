#include "main.h"

/**
*swap_int - swaps values of two integers
*@a: integer '*a'
*@b: integer '*b'
*Return: void
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
