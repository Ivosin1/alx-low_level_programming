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
	char k = 'a';

	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
