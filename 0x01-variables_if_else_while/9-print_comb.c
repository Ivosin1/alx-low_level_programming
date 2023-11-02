#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	int k = '0';

	while (k <= '9')
	{
		putchar(k);
		if (k < '9')
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar ('\n');

	return (0);
}
