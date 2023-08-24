#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: amount of times \ should print
 * Return: Always 0 (To scertain successful run)
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, m;

		for (k = 0; k < n; k++)
		{
			for (m = 0; m < n; m++)
			{
				if (m == k)
					_putchar('\\');
				else if (m < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
