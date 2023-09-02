#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of two diagonals
 * of a square matrix of integers.
 * @a: The matrix of the integers.
 * @size: The size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int k, sum1 = 0, sum2 = 0;

	for (k = 0; k < size; k++)
	{
		sum1 += a[k];
		a += size;
	}

	a -= size;

	for (k = 0; k < size; k++)
	{
		sum2 += a[k];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
