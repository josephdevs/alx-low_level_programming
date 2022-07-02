#include <stdio.h>
#include <ctype.h>

/**
*main - prints reversed  alphabet followed by new line
**Return: returns 0 and !0 otherwise
*/

int main(void)
{

int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

putchar('\n');
return (0);

}
