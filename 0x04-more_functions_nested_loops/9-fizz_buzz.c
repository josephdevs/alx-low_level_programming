#include "main.h"
#include <stdio.h>

/**
 * main - attempts the FizzBuzz challenge
 * Return: Returns 0 if sucessful, !0 otherwise
 */

int main(void)
{
int i = 1;

for (; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
	printf("FizzBuzz ");
else if (i % 3 == 0)
	printf("Fizz ");
else if (i % 5 == 0)
	printf("Buzz ");
else
	printf("%d ", i);
}

printf("Buzz\n");
return (0);
}
