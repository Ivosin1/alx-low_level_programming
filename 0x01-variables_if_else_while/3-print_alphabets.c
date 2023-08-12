#include <stdio.h>

/**
 * main - Begin program from here
 *
 * Return: Always 0 (To ascertain success)
 */

int main(void)
{
	char k, m;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
