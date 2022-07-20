#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: points to constant byte
 *@b: a constant
 *@n: number of bytes
 *Return: pointer to the memory area 's'
 */

char *_memset(char *s, char *b, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);

}
