#include "main.h"

/**
 *print_line - function that draws a straight line
 *@n: number of times the character should be printed
 *Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		int k;

		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
