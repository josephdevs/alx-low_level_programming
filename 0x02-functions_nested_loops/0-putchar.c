#include "main.h"

/**
*main - prints _putchar to screen
*Return: returns 0 if no errors
*/

int main(void)

{

char output[9] = "_putchar";

int i = 0;

while (i < 9)

	{
	_putchar(output[i]);
	i++;
	}

_putchar('\n');
return (0);

}
