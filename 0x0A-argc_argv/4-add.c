#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds postive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array containing the command line arguments.
 * Return: Always 0 (To ascertain successful run).
 */

int main(int argc, char *argv[])
{
	int k, l, add = 0;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (!isdigit(argv[k][l]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[k]);
	}
	printf("%d\n", add);
	return (0);
}
