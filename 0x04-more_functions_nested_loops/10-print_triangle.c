#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle
 * Return: Always 0 (To ascertain successful run)
 */

void print_triangle(int size)
{
	int k;
	int m;

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (m = size - k; m > 0; m--)
				_putchar(' ');

			for (m = 0; m < k; m++)
				_putchar('#');

			if (k == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
