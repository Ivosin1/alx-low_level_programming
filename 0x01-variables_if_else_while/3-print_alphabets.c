#include <stdio.h>

/**
 * main - Begin program from here.
 *
 * Return: Always 0 (To ascertain success).
 */

int main(void)
{
	char alph = 'a';
	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');
	return (0);
}
