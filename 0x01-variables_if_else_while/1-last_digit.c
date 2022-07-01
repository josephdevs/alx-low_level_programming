#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - prints the last digit of the number stored in the variable 'n'
* Return: returns (0) if successful and !0 (non-zero) if errors are encountered
*/

int main(void)
{

int n, n2;
srand(time(0));
n = rand() - RAND_MAX / 2;

n2 = n % 10;

if (n2 > 5, n2)
	printf("Last digit of %d is %d and is greater than 5\n", n, n2);
else if (n2 == 0)
	printf("Last digit of %d is %d and is 0\n", n, n2);
else if (n2 < 6 && n2 != 0)
	printf("Last digit of %d is %d and less than 6 and not zero", n, n2);

return (0);

}
