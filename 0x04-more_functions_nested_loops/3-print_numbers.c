#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: Always 0 (To ascertain succeeful run)
 */

void print_numbers(void)
{
	int k = '0';

	for (k = '0'; k <= '9' ; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
