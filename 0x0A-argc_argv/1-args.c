#include <stdio.h>

/**
 * main - program that prints num of args it receives
 * @argc: arg
 * @argv: arr
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	
	printf("%i \n", argc - 1);
	
	return (0);
}
