#include <stdio.h>
#include <ctype.h>

/**
*main - prints alphabet in lowercase then uppercase followed by a new line
*Return: returns 0 if no errors encountered and !0 if fail.
*/

int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	alpha = tolower(alpha);
	putchar(alpha);
		if (alpha == 'z')
		{
			alpha = 'A';
			for (; alpha <= 'Z'; alpha++)
			{
				putchar(alpha);
			}
			break;
		}
	}
putchar('\n');
return (0);
}
