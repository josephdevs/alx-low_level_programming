#include <stdio.h>
#include "3-function_like_macro.h"

int main(void)
{
	int j = ABS(-45) * 10;
	int i = ABS(45) * 10;

	printf(__FILE__ "%d and %d \n", i, j);
	
}
