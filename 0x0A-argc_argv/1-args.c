#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of command arguments.
 * @argv: The array containing the command line arguments.
 * Return: Always 0 (To ascertain a successful run).
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
