#include <stdio.h>
#include <ctype.h>

/**
*main - Prints all single digit numbers of base 10 followed by new line
**Return: returns 0 if successful and !0 if errors encountered
*/

int main(void)
{

int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

putchar('\n');
return (0);

}
