#include <stdio.h>
#include <ctype.h>

/**
*main - prints alphabet in lowercase followed by new line
*Return: returns 0 if successful and non-zero if fail
*/

int main(void)
{
int alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	alpha = tolower(alpha);
	putchar(alpha);
}
putchar('\n);
return (0);
}
