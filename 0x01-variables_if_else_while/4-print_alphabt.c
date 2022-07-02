#include <stdio.h>
#include <ctype.h>
/**
*main - print alphabet letters except'a' and 'e' followed by a new line*
*Return: returns 0 if successful and !0 if errors encountered
*/

int main(void)
{

int alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha == 'q' || alpha == 'e')
	{
	continue;
	}
	putchar(alpha);
	}

putchar('\n');
return (0);

}
