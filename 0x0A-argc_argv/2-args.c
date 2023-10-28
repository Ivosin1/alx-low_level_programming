#include <stdio.h>

/**
 * main - Prints all the arguments received.
 * @argc: The number of command line arguments.
 * @argv: The array containing the command line.
 * Return: Always 0 (To ascertain a successful run).
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
