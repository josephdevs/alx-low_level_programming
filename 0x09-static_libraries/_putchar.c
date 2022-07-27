#include <unistd.h>

/**
 * _putchar - outputs character c to stdout
 * @c: character to print
 * Return: Success 1, fail -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
