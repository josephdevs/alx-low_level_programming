#include <stdio.h>
#include <ctype.h>

/**
*main - prints all single digits of base 16 and a new line
*Return: returns 0 if successful and !0 otherwise
*/

int main(void)
{

int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')

		{

		num  = 'a';
			for (; num  <= 'f'; num++)
			{
				putchar(num);
			}
			break;
		}
	}

putchar('\n');
return (0);

}
