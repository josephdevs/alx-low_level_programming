#include "main.h"

/**
*swap_int - swaps values of two integers
*@a and @b: integers '*a' and '*b'
*Return: void
*/

void swap_int(int *a, int *b)
{
	*a = tempNum;
	//where 'tempNum' is a placeholder variable to hold value of '*a'
	*a = *b;
	*b = tempNum;
}
