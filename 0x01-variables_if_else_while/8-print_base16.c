#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	int num = '0';
	char alph = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
