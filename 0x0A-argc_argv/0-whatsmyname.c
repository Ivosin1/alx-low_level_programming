#include <stdio.h>

/**
 * main - Programme prints its name followed by a new line.
 * @argc: Number of command line arguments.
 * @argv: Array having the command line arguments.
 * Return: Always 0 (To ascertain successful run)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
