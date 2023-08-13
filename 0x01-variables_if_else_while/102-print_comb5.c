#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	int k, m;

	for (k = 0; k <= 98; k++)
	{
		for (m = k + 1; m <= 99; m++)
		{
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar(' ');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');

			if (k == 98 && m == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
