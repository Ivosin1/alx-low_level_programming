#include <stdio.h>

/**
 * main - finds and prints the largest prime
 * factor of 612852475143
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	long num = 612852475143, prime = 2;

	while (num > 1)
	{
		if (num % prime == 0)
		{
			num /= prime;
		}
		else
		{
			prime++;
		}
	}

	printf("%ld\n", prime);
	return (0);
}
