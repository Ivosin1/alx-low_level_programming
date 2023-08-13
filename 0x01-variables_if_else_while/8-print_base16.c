#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain successful run)
 */

int main(void)
{
	int h;
	char m;

	for (h = '0'; h <= '9'; h++)
		putchar(h);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar ('\n');

	return (0);
}
