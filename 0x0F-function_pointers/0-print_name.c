#include "function_pointers.h"

/**
 * print_name - Prints name.
 * @name: name to print.
 * @f: pointer to function that prints name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
