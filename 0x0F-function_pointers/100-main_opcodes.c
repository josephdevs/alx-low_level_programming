#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of args supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int numBytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < numBytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == numBytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
