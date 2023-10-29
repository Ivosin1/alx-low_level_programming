#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain success)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
		alph++;
	}
	putchar('\n');

	return (0);
}
