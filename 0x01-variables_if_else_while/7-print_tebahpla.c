#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	char rev_alph = 'z';

	while (rev_alph >= 'a')
	{
		putchar(rev_alph);
		rev_alph--;
	}
	putchar('\n');

	return (0);
}
