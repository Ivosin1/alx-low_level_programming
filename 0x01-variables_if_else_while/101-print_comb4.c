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
	int k, m, n;

	for (k = '0'; k < '9'; k++)
	{
		for (m = k + 1; m <= '9'; m++)
		{
			for (n = m + 1; n <= '9'; n++)
			{
				if ((m != k) != n)
				{
					putchar(k);
					putchar(m);
					putchar(n);

					if (k == '7' && m == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
