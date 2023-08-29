#include "main.h"

/**
 * reverse_array - fucntion that reverses an array of integers
 * @a: reversed array
 * @n: number of elements of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int k;
	int l;
	int tmp;

	l = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		tmp = a[k];
		a[k] = a[l];
		a[l--] = tmp;
	}
}
