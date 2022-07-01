#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - program determines whether integer 'n' is positive or negative
 *Return: returns (0) if there are no errors encountered
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positve\n", n);
if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);

return (0);
}
