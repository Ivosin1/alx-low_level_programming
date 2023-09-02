#include "main.h"

/**
 * print_chessboard - Function that prints a chessboard.
 * @a: an array input to print
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int l;

	for (k = 0; k < 8; k++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[k][l]);
		}
		_putchar('\n');
	}
}
