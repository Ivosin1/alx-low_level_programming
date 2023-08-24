#include "main.h"

/**
 * print_square - Writes a function that prints a square,
 * followed by a new line.
 * @size: size of the square
 * Return: Always 0 (To ascertain successful run)
 */
void print_square(int size)
{
	int k, m;

	if (size > 0)
	{
		for (k = 0; k < size; k++)
		{
			for (m = 0; m < size; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
