#include "main.h"

/**
*_strncpy - copies a string
*@dest: points to destination string
*@src: points to source string
*@n: number of bytes
* Return: pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int bytes;

	for (bytes = 0; bytes < n && src[bytes] != '\0'; bytes++)
	{
		dest[bytes] = src[bytes];
	}

	for (; bytes < n; bytes++)
	{
		dest[bytes] = '\0';
	}

return (dest);
}
