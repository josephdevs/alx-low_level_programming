#include <stdio.h>
#include <ctype.h>
/**
*main - prints all single digits of base 10 followed by new line
*Return: returns 0 is successful and !0 otherwise
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
