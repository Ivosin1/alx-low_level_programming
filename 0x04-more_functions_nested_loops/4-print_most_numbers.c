#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * excluding 2 & 4
 * Return: Always 0 (To ascertain successful run)
 */

void print_most_numbers(void)
{
	int k = '0';

	for (k = '0'; k <= '9' ; k++)
	{
		if (k != '2' && k != '4')
			_putchar(k);
	}
	_putchar('\n');
}
