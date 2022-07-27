#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by 'src' to 'dest' buffer
 * @dest: points to dest buffer
 * @src: points to char
 * Description: Copy the string pointed to by pointer `src` to 'dest' buffer
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
