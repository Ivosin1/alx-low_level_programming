#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Beginning from here
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
