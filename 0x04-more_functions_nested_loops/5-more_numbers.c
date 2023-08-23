#include "main.h"


/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: Always 0 (To ascertain successful run)
 */

void more_numbers(void)
{
	int k, m;

	for (k = 0; k <= 9; k++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
