#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
