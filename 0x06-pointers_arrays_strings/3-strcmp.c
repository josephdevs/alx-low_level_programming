#include "main.h"

/**
 *_strcmp - compares two strings.
 *@s1: points to first string.
 *@s2: points to second string.
 *Return: 0 if s1 &  s2 equal, -ve if s1 less than s2, +ve otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i, rtrn_value;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	rtrn_value = s1[i] - s2[i];

return (rtrn_value);
}
