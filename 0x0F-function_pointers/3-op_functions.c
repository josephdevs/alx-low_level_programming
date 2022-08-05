#include "calc.h"

/**
 * op_add - returns the sum of two numbers.
 * @a: first num.
 * @b: second num.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: first integer
 * @b: second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get remainder
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
