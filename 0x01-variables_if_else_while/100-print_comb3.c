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

	for (k = '0'; k < '9'; k++)
	{
		for (m = k + 1; m <= '9'; m++)
		{
			if (m != k)
			{
				putchar(k);
				putchar(m);

				if (k == '8' && m == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
