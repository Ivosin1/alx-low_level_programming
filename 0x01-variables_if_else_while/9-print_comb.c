#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
		if (k != '9')
			putchar(',');
		putchar(' ');
	}
	putchar ('\n');

	return (0);
}
